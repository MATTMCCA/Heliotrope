
# Heliotrope

Keyboard Maintainer: [MJM](https://github.com/MATTMCCA/Heliotrope)  

Make example for this keyboard (after setting up your build environment):

`qmk compile -kb heliotrope -km default`
    
or with vial support

`qmk compile -kb heliotrope -km vial`

## Environment Setup

1.) Install [QMK MSYS](https://github.com/qmk/qmk_distro_msys/releases/)

2.) Generate an ssh key `ssh-keygen`

3.) Read the ssh key `cat .ssh/id_rsa.pub`

4.) Add this key to your github account

5.) Clone vial qmk `git clone git@github.com:vial-kb/vial-qmk.git`

6.) Clone the submodules `cd vial-qmk/ && make git-submodule && cd ..`

7.) Setup qmk with vial as homefolder `qmk setup -H ./vial-qmk/`

8.) Copy the helitrop keyboard dir to `vial-qmk/keyboards`

9.) Compile default keymap `qmk compile -kb heliotrope -km default`

10.) Compile via & vial keymap `qmk compile -kb heliotrope -km via`


---
* For more information see [video](https://www.youtube.com/watch?v=POi9ttF2dsk).
* For more info see [this blog](https://blog.heaper.de/e/porting-for-vial)
* https://docs.qmk.fm/#/keycodes
* https://docs.qmk.fm/#/getting_started_build_tools
* https://docs.qmk.fm/#/newbs
* https://get.vial.today/docs/porting-to-vial.html
* https://qmk.fm/converter/
* https://github.com/mechmerlin/qmk_setup/blob/master/info_json_tutorial.md
