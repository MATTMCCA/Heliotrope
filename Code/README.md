# Heliotrope

Testing QMK

# QMK CLI Notes

* Upon cloning the QMK Repo `git clone https://github.com/qmk/qmk_firmware.git` and building the sub modules `make git-submodule`. you can then use the CLI to **create** a new keyboard.
* `qmk new-keyboard`, this creates a new directory structure, and guides you though the config process. This also populates a new default keymap.
* `qmk c2json -km heliotrop_test -kb default keymap.c -o keymap.json` creates a json from the generated keymap file.
* `qmk info -kb heliotrope_test -km default -m`, allows you to view the keymap and matrix
* `qmk compile -kb heliotrope_test -km default`, compiles the firmware.

## CLI Output
```
Keyboard Name: heliotrope                                   
Manufacturer: MJM                                                
Website: https://github.com/MATTMCCA/Heliotrope                  
Maintainer: MATTMCCA                                             
Keyboard Folder: heliotrope                                 
Layouts: LAYOUT_60_ansi                                          
Processor: atmega32u4                                            
Bootloader: caterina                                             
Matrix for "LAYOUT_60_ansi":                                     
┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──────┐     
│0A││0B││0C││0D││0E││0F││0G││0H││0I││0J││0K││0L││0M││0N    │     
└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──────┘     
┌────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌────┐     
│1A  ││1B││1C││1D││1E││1F││1G││1H││1I││1J││1K││1L││1M││1N  │     
└────┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└────┘     
┌─────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───────┐     
│2A   ││2B││2C││2D││2E││2F││2G││2H││2I││2J││2K││2L││2N     │     
└─────┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└───────┘     
┌───────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌─────────┐     
│3A     ││3B││3C││3D││3E││3F││3G││3H││3I││3J││3K││3N       │     
└───────┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└─────────┘     
┌───┐┌───┐┌───┐┌───────────────────────┐┌───┐┌───┐┌───┐┌───┐     
│4A ││4B ││4C ││4F                     ││4J ││4K ││4L ││4N │     
└───┘└───┘└───┘└───────────────────────┘└───┘└───┘└───┘└───┘     
Keymap default Layer 0:                                          
┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──────┐     
│GR││1 ││2 ││3 ││4 ││5 ││6 ││7 ││8 ││9 ││0 ││MI││EQ││BSPC  │     
└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──────┘     
┌────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌────┐     
│TAB ││Q ││W ││E ││R ││T ││Y ││U ││I ││O ││P ││LB││RB││BSLS│     
└────┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└────┘     
┌─────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───────┐     
│CAPS ││A ││S ││D ││F ││G ││H ││J ││K ││L ││SC││QU││ENT    │     
└─────┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└───────┘     
┌───────┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌─────────┐     
│LSFT   ││Z ││X ││C ││V ││B ││N ││M ││CO││DO││SL││RSFT     │     
└───────┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└──┘└─────────┘     
┌───┐┌───┐┌───┐┌───────────────────────┐┌───┐┌───┐┌───┐┌───┐     
│LCT││LGU││LAL││SPC                    ││RAL││RGU││APP││RCT│     
└───┘└───┘└───┘└───────────────────────┘└───┘└───┘└───┘└───┘     

```

### Useful Links


https://github.com/qmk/qmk_firmware/blob/master/docs/reference_info_json.md#rgb-lighting

https://github.com/qmk/qmk_firmware/blob/master/docs/config_options.md

https://github.com/qmk/qmk_firmware/blob/master/docs/cli_commands.md


