// **********************************************************************************
//
// RiCino v2
// Arduino Lap Counter System
// https://github.com/cdemetriadis/RiCino-Lap-Counter
//
// Original code
// by Sergio Vallejo Crespo
// http://lisergio.wordpress.com
//
// Rafactoring, translation and maintenance
// by Constantinos Demetriadis
// http://ohmylovely.com
//
// **********************************************************************************
//
// Transponder
//
// **********************************************************************************


#include <IRremote.h> 
/*
  Seems to work better with Arduino IDE 1.8.19, ATTINYCORE 1.5.2, IRRemote 2.8.0
  Wrong Timing issues / not recieving NEC Code are solved with using the IRRemote Lib in the above setup
  */


// Transponder Code
// The transponder code is a 2 byte HEX code which
// can range from 0x1000 to 0xFFFF
#define tx 0x1000

IRsend irsend;

void setup() {
    irsend.enableIROut(38);
}

void loop() {
    irsend.sendNEC(tx, 32);
    delay(10);
}
