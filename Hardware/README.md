


# View All Project Files Online

https://www.altium.com/viewer/

## Notes:
* This is an untested keyboard design, its still a work in progress.
* Much hardware debugging still needs done.

# USB 3.0 Power

The logic board has been revised to comply with USB3.0 and Legacy USB power modes  (un-tested).

Lots of open source schematics only included a 5.1K CC resistor. This will effectively signal the host to supply max current. The problem with this, is the keyboard doesn't know how much that will be. To mitigate potential host damage on legacy ports and ports with no over current protection. A dedicated IC is being used to negotiate the power mode, and regulate the current draw to a safe level.  
