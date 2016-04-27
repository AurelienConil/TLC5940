############# Tlc5940 Library #####################
Modified to works with Arduino Micro and servomotor

Probably works with Arduino Leonardo, but untested


--------Note---------
Due to problem using ATmega32U4 you have to comment/uncomment
the right include manually in pinout/chip_includes.h according to 
your board. Note that Micro and Leonardo are similar, but not tested with
Leonardo
---------------------
chip_includes.h
---------------------
#elif defined (__AVR_ATmega32U4__)
/* ATmega32U4 is both used by arduino MICRO and Teensy 2.0 
You need to comment uncomment the included file according to your board
*/

/* Arduino Micro */
 #include "ATmega_xxU4.h"

/* Teensy 2.0 */
//#include "Teensy_xxU4.h"




16 channel PWM LED driver based on the Texas Instruments TLC5940 chip.

http://www.pjrc.com/teensy/td_libs_Tlc5940.html

http://code.google.com/p/tlc5940arduino/

http://playground.arduino.cc/Learning/TLC5940

https://github.com/PaulStoffregen/Tlc5940

![Tlc5940 with Teensy 2.0](http://www.pjrc.com/teensy/td_libs_Tlc5940_1.jpg)
