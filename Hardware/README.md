

# View All Project Files Online

https://www.altium.com/viewer/

## Notes:
* This is an untested keyboard design, its still a work in progress.
* Much hardware debugging still needs done.


# Safety Notice

Preliminary calculations show that the **MAX** load capacity for the power buss is <= 1.6 A. That said, it is strongly advised you DO NOT operate the LEDs at full luminosity.

The spec sheet calls out .2Watts per LED. At 5v that's 40mA, I assume this correlates to a full brightness of (0xFFh). To avoid damage to the PCB, its strongly recommended you do not exceed a brightness value of (0x80h). This should give a load max of 1.22A, within the rated spec of the board design.

### In Layman's Terms

Running the LED's more than half brightness may cook the 20 mill power traces. 

Recommended info.json value ```"max_brightness":   128```

To comply with USB 2.0 power spec of (500mA) a brightness value of <= 50 will probably work best.

---
*I am not liable for any damages caused by the use of this design.*
