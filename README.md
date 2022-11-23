# DiSz-Nugget (WIP)
Both Wifi-Nugget (D1 mini) and USB-Nugget (S2 mini) on the same PCB

## Background
After building `DIY-Wifi-Nugget`, I saw someone on the HakCat Discord propose and Utra-Nugget. Their idea was the run the chips (D1 and S2) concurrently to a single screen but i dont understand how that is feasible....anywho it got me thinking about how i could do it, so here is my ghetto version breakdown.

## Brain Storm
- If i effectivly build to DIY-Wifi-Nuggets on the same PCB replacing one of the D1's with an S2, I can have the functionality of both devives in a 58x76mm footprint device (which im happy with).
- If i replace one of the units 3 buttons with a dip switch, I can use the same 3 buttons to contol both devices by toggling the DIP's
- Power: 
  - would be nice to power both boards from 1 USB port but that would make flashing a nightmare (if not imposible) so ill hotwire the ground and VCC of both boards to a single USB plug, so power can be supplied to both but they will each have their own native USB for flashing (and injecting code in the case of the S2)
  - Ill need to run a Diode on each line so when flashing code the second board does not power up.
  ![DiSz_Concept_CirDia](https://user-images.githubusercontent.com/24452466/203649160-c27245be-e127-4caa-bd09-783d503378f9.jpg)
