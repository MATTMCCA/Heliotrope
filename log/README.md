


# Parts!

### Arrived
* wenext case V1
* PCB's Logic and mini
* MX switches
* Two types of sockets
* RGB Leds
* Screws and inserts
* Random wire and stuff
* Other things that I'm probably forgetting

# Log

The wenext SLA Print came out nice, there was minimal warping to the case. However the slim top piece is unusable. This is my fault for not fully understanding the properties of the material. A revision is in my near future.

The PCB's came out perfect, all of the footprints match as I had hoped, and all the though hole mounted LED's have room. Both types of sockets fit the same footprint, so that's good news.

I'm also still waiting on my steel plate, once I have everything in front of me, I can tweak away.

# Log 001

I got my SLA prints from JLCPCB, they look great. I did a test assembly, and everything fits so far. I did notice warping in the back, presumably due **the lack of screw** ( omitted, but shouldn't of been, symmetry is your friend ).  See photos 003 - 009, I may not need to revise the case, other than the addition of a screw.

# Log 002

I got my second batch of "imagine black" SLA resin parts from wenext. I think I'm just going to brace the top from with 2mm cross members, and run a third batch of cases in 3201PA-F Nylon (JLCPCB). This is a last ditch effort to print a case, without a complete case redesign. OH! I also got my switch plate from ponoko the other day, its perfect (see repo photos).

Edit: so I'm ignorant when it comes to material selection. BUT! I guess 3201PA-F Nylon is printed with SLS technology, so no curing, which means no warping? I'm just going to fab the case as is so I can see how it compares to a resin print. Lets hope this is my last expensive mistake lol.

# Log 003

I just noticed that my RGB Led footprint is **wrong**. So no RGB on my prototype, stay tuned for an artwork revision. However the key switch matrix works perfect, so that's good news. I have yet to scope the signals to see how messy they are.

# Log 004

New boards and case parts have arrived today. JLCPCB's SLS printed parts came out perfect! [see photos 017-020] by far the best prints I have ever had made. As for my design, its all **warped**, **jabberwonked**, and **kerflutzed**. I should had added more ribs to the bottom half of the case. I'm going to hold off on another case design for now, hopefully that will change in the future. Even with minor warping, everything actually fits the way it should. 

I think the best part about all this is, JLC keeps telling the parts will warp. Now a rational person I would have caught on by now, but no.... I'm going to continue to be naive.

After my bulk order of LED's and sockets clear customs, I can assemble the PCB, yet again. As a note to self, 3201PA-F Nylon is extremely flexible, while the other material that Ive used to date appear more ridged as a solid. I rather like 3201PA-F Nylon.

Ive also impulsively purchased a few (regularly priced, not inflated) STM32F411CEU6's, so I will see where that takes me. According to the *musty bowels of the internet*, QMK has support for the STM32F411. So far I have been able to compile a test build with no issue. So this is good news.

# Log 005

I got my new new new 3D prints today, MJF Nylon 12 (dyed the sexist of purples) (photo 21-23). These have been the best prints yet, FAB JawsTec, USA based. Everything looks good, the material is better than the 3201PA-F, and no warping, that's right folks!, ZERO WARP (+|- some warp after assembly). This is not a paid review, I'm just a weirdo who builds things. I also got my key-switch sockets today, still waiting on my LED's.

# Log 006

I populated V2 of the keyswitch PCB (I finally got my parts). LED's work, I'm still debugging the matrix, I have some cold joints. The board has not been fitted into the case yet. See Demo video 001 for an RGB cycle test.

My next goal is to fab V2 of the logic board, and assemble that. It will probably another week or so before I get the PCB's and parts. 

### Log 006.b

I just fixed all my cold joints (hot air soldering was to blame). All of the keys are electrically connected, and register in Key Tester, see photo 025. I dub this a **success**, all I need now is my logic board and I'll have a keyboard.

### Log 006.c

I was in a mood, so I test fit everything without the logic board, see assembly pics 026 - 028. Shes a lean, mean, purple keyed typing machine.

# Log 007

Waiting on my revised logic boards, and some other tools to complete assembly.

# Log 008

I got V2 of the logic boards in today, I'm not going to photo op the PCB's as I'm waiting the final rev with USB power negotiation. 

"**activating rant mode**" I'm not really sure what sparked this project, It may have been internet hype, I just know I wanted to design a keyboard. Looking back Ive leaned alot about 3D printed material properties as well as explored a number of different fabrication services. 

*hopefully* the boards currently being fabed will be my last expenditure on the project. (I also have o-rings and washers on order, plus this nifty infrared board warmer I hope to use for reflow >285C)

I still really want a better case, and I may redo the top plate, the keyswitches are a bit lose. This is still all hearsay, my main objective is to get a working unit so a can "release" the build files. The upper case frame is almost un-manufacture-able as is. I'm also rethinking the power plane for the LED's its wayyyy thinner than I would have liked, its around 10mills. 

I'm also rethinking the purple, the keycaps seem a bit girly, I may replace them for black. I should also paint / polish the switch plate, its pretty industrial looking. .....OR! BLUE IT! I might actually do that. that would be kinda sweet.

# Log 009

I just got a new toy in the mail, see photo 29. The YiHUA 853A by itself did not get hot enough to melt my low temp paste (< 200C). So I'm bummed, it still dose a great job a heating the board, I just wish it got hotter.

# Log 010

I just sat down, pasted my boards, populated all the parts, and realized I forgot to order the USB Connector..... there goes my weekend, now I get to wait on more parts...

### Log 010.b
I went ahead and re-flowed what I had, I can always do the connector when it arrives. (see photo 30)

# Log 011

I went ahead and got my new case design fab-ed at [jawstec](https://www.jawstec.com/) just to see how it would turn out. I also am getting the plate fab-ed as well, from [oshcut](https://www.oshcut.com/). The plate is going to be laser cut, formed, and powder coated black. The case is going to be produced out of purple Nylon 12.

I was reluctant to fab anything as I did not account for manufacturing tolerances. So my hopes for success are low, but if this is a failure, I will at-least see *how* and *why* it didn't work. which arguably is more important than a success. 

Ive also never had anything powder coated before, so I'm excited to see how that turns out. I *hope* it only adds a few mills to the surface of the part. 

Oh and digikey is reportedly experiencing high order volumes. So despite paying for overnight shipping, my parts will not be in today...  

# Log 012

### The Good
My USB connectors came today! they fit perfect on the board, see photo 33. The Load switch preformed great, I was able to get the chip to experience a Over Current Mode Failure. Which is exactly why its in the design. I cranked the LED's to max and the power kicked off, its was pretty nice. Although to recover, I had to disconnect the LED's, so that was a pain.

The rest button put the STM in DFU mode as planed, so that works perfect. on first power the STM jump to the application.

I was worried about the 8Mhz xtal not being the right value for chibiOS, but it worked with no issue. The dividers are right otherwise USB would of failed.

### The Bad
A row of my key-switches don't register, I may need to re-flow the STM or the FFC connector.

I'm unable to fully test power negotiation, my hub is legacy, and I'm not in the mood to fight with cables. I should test this at a latter date.

### The Ugly
I totally put the filter Cap next to pin 3 of U4, it should have been next to pin 1 of U4.

Actually, I put the wrong IC on order, it should of been AP22653 or AP22653A. Both are active high, sub A, cuts the supply when over current happens, the other delivers constant current, which may led to thermal shutdown. The sub A variant may be the best option for circuit protection. 

I I'm also having trouble enumerating the keyboard. This could be from either my shotty soldering job or the connector. OR I need to add a bleed resistor to the 3.3v rail. Or all of the above...

---
All in all, I think this is coming along pretty good. Minus a few stupid and expensive mistakes, I'm making good progress. GoodJob Self! 

