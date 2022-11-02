
# View All Project Files Online

https://www.altium.com/viewer/

## Notes:
* This is an untested keyboard design, its still a work in progress.
* Much hardware debugging still needs done.

# Logic Revision Plan

In order to actually comply with USB spec, I plan on implementing an intelligent current limiter. This should protect the host from an over current condition, while still allowing for low current USB host ports. This will also protect the board, dissipating too many watts may cause a PCB failure of the most spectacular kind (something I would rather avoid). 