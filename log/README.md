






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
