
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

This change grants me the ability to draw more than 500mA, the exact value is unknown. It equates to 0xFF somewhere deep deep deep in the code.
```
heliotrope\keymaps\via\config.h

#include "config_common.h"
#define USB_MAX_POWER_CONSUMPTION 510
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

Once compiled and booted, I changed the keymap in via so I could control the brightness level with 2 keys, bright up & bright down.

# LED Tests

### Type A port to Type C

Originally the KB was plugged into my hub, once running, windows said nope, can't run the device, not enough power.

So I plugged the KB in to my Type A port directly. Current draw unknown, but the load switch tripped after the first few brightness steps. I'm going to assume, the trip level was either 500mA or 1.5mA. This will have to be looked at on a latter date.

### Type C port to Type C port via PCIe

This is the test I'm excited about! (see supporting photos)

Starting with an HSV val of (100,100,100), I drew around 1.0 Watt (according to my cable). This tells me (200mA) so the MCU and LED's are pulling almost nothing.

BUT! when I cranked the brightness up, something beautiful happened, it got bright! SOOO BRIGHT! total power draw was all the way up to 7.1 Watts before tripping the load switch. This tells me, (7.1/5) = 1.42A!. This is very close to the limit threshold of 1.407A. What I haven't determined, is, which limit mode I'm actually in (1.4A or 1.7A).

# ...To Be Continued... 
