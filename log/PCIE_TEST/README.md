

# Now what we have here, is a failure, to communicate!
Other tag lines include
* USB-PD: The untold story of power [Narrated by Morgan Freeman]
* USB-PD: I over powered an RGB Keyboard, not because it was easy, but because it was hard.
* One major shortcoming of typical RGB Boards.... other than RGB...
* ```place holder for sas at a later date```

# PCIE Card Testing

I randomly picked up an [amazon PCIE card online](https://www.amazon.com/dp/B08T6FCF9S), along with a USB type C metered [cable](https://www.amazon.com/dp/B09D7F9MQ3). The aim was to prove without very much effort, that my logic board power circuit would safely behave in the intended manner, the application being moderately high current, over USB.

# QMK Change for Testing

To quickly test this with hardware on hand I changed the following.

#### Edit
It looks like the Type C port Ignores bMaxpower and uses CC1 CC2 for power configuration. So setting  USB_MAX_POWER_CONSUMPTION to 500, should be fine.

```
heliotrope\keymaps\via\config.h

#include "config_common.h"
#define USB_MAX_POWER_CONSUMPTION 500
```

This change was to allow me to default the keyboard to a safe state.

```
heliotrope\keymaps\via\config.h

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(100,100,100);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
```

This change allowed me to crank like I have never cranked before!

```
heliotrope\info.json

		"max_brightness": 255,
```

Once compiled and running, I changed the keymap in via so I could control the brightness level with 2 keys, bright up & bright down.

# LED Tests

### Type A port to Type C

Originally the KB was plugged into my hub, once running, windows said nope, can't run the device, not enough power.

So I plugged the KB in to my Type A port directly. Current draw unknown, but the load switch tripped after the first few brightness steps. I'm going to assume, the trip level was 500mA. This will have to be looked at on a latter date.

### Type C port to Type C port via PCIe

This is the test I'm excited about! (see supporting photos)

Starting with an HSV val of (100,100,100), I drew around 1.0 Watt (according to my cable). This tells me (200mA) so the MCU and LED's are pulling almost nothing.

BUT! when I cranked the brightness up, something beautiful happened, it got bright! SOOO BRIGHT! total power draw was all the way up to 7.1 Watts before tripping the load switch. This tells me, (7.1/5) = 1.42A!. This is very close to the limit threshold of 1.407A. What I haven't determined, is, which limit mode I'm actually in (1.4A or 1.7A).

# ...To Be Continued... 

# The Real Numbers
* The Logic board without Led's draws 58.4mA. [Measured]
* USB-C MAX LED current before shutdown is 1.32A and iset resistors are connected to GND [Measured]
* Operating in type A mode, strangely gives me a limit of 352mA [Measured].

This confirms, that the circuit is operating as expected. What it doesn't tell me is why I'm going into an over current condition, before, the preset current limit is reached.

#### Calculation of Iset tolerance levels 
```
1.705A @ +- 7% = 1.585A & 1.824A
1.407A @ +- 7% = 1.308A & 1.505A
0.489A @ +- 7% = 0.454 & 0.523A
```
Based on the above, I should be-able to sink more than 1.3A. 

I'm going to remove the 102K to see what happens with the set limit. **The output was limited to 1.09A**

So... Observation, Lower than set current levels in medium and high current mode by 400mA. Lower than set current level in low current mode by 200mA.

Proposed solution: calculate new values based on observed under performance? 

```
1.7+.4    = 2.1A   = 15k = 43K || 28K || 130K
1.4+.4    = 1.8A   = 17K = 43K || 28K
0.489+0.2 = 0.689A = 43K = 43K
```

OH! Just found a contradiction in the {AP22652/AP22653/AP22652A/AP22653A} datasheet.

It states ```±7% Accurate Adjustable Current Limit, 1.735A with RLIM  = 15kΩ```

BUT! ```I  LIMIT_Typ[mA]  = 30321/R[kΩ]  ^1.055```

The above shows, 2.1A @ 15K.... so.... what does that mean?!? Maybe that the curve of best fit is inaccurate? Maybe what I'm seeing is compounded tolerance from multiple components? and everything is operating correctly.

At the very least, its interesting that the observed values are pretty far off from the calculated.

### Edit
Actually, I'm just going to just by a [0603 resistor kit](https://www.amazon.com/dp/B013B5587K) then swap out resistors till I find the right values.... Science!

# Thar She Blows!
After thinking about it, since the MCU only draw <100mA. It may be wise to get a 200mA fuse vs the 500mA in the BOM.

ALT Fuse: 0603L010YR

# Thermal Shutdown Calculation
Not know what the actual temp of the LoadSwitch under full load was really bothering me, So I did the maths....

Full load being 1.7A for this application (teetering on the hairy edge of the load carrying capacity of the traces)

Using AP22653W6-7, thetaJA = 120C/W, RDS_on = 135e-3.

Pd = 135e-3x1.7^2 = 0.39

Tj = 0.39 x 120 + 25 = 71.8C

So.. the junction temp at max load is only 70C, It looks like the recommended junction temperature is 125C. Conceivably, I could run the constant current version of the load switch without worry of thermal shutdown. YAY! imma do that!

Using the CC version of the IC is a better option, now knowing that it wont meltdown under full load. This avoids losing load power on a low current port, which is nice.

# Final Resistor Values 

Logic board: R1 = 56K, R2 = 27K, R6 = 120K, ILim = .48A, 1.4A, 1.6A