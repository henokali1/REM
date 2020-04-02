/*
 * IRremote: IRsendRawDemo - demonstrates sending IR codes with sendRaw
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 *
 * IRsendRawDemo - added by AnalysIR (via www.AnalysIR.com), 24 August 2015
 *
 * This example shows how to send a RAW signal using the IRremote library.
 * The example signal is actually a 32 bit NEC signal.
 * Remote Control button: LGTV Power On/Off. 
 * Hex Value: 0x20DF10EF, 32 bits
 * 
 * It is more efficient to use the sendNEC function to send NEC signals. 
 * Use of sendRaw here, serves only as an example of using the function.
 * 
 */


#include <IRremote.h>

IRsend irsend;

const unsigned long POWER = 0xFD9A65;
const unsigned long REC = 0xFD1AE5;
const unsigned long MUTE = 0xFD9867;
const unsigned long EPG = 0xFDB24D;
const unsigned long P_PLUS = 0xF2B847;
const unsigned long TTX = 0xFDB04F;
const unsigned long INFO = 0xFD8A75;
const unsigned long UP = 0xFD609F;
const unsigned long EXIT = 0xFDA047;
const unsigned long V_MINUS = 0xFD5AA5;
const unsigned long OK = 0xFD58A7;
const unsigned long V_PLUS = 0xFDD827;
const unsigned long DOWN = 0xFD6897;
const unsigned long FAV = 0xF2D52A;
const unsigned long TV_RADIO = 0xFDA857;
const unsigned long ONE = 0xFD4AB5;
const unsigned long TWO = 0xFD0AF5;
const unsigned long THREE = 0xFD08F7;
const unsigned long FOUR = 0xFD6A95;
const unsigned long FIVE = 0xFD2AD5;
const unsigned long SIX = 0xFD28D7;
const unsigned long SEVEN = 0xFD728D;
const unsigned long EIGHT = 0xFD32CD;
const unsigned long NINE = 0xFD30CF;
const unsigned long ZERO = 0xFDF00F ;
const unsigned long RECALL = 0xFDE817;
const unsigned long SAT = 0xFDF00F;
const unsigned long REV = 0xFD52AD;
const unsigned long FWD = 0xFD12ED;
const unsigned long PREV = 0xFD20DF;
const unsigned long NEXT = 0xFDD02F;
const unsigned long PLAY = 0xFD629D;
const unsigned long PAUSE = 0xFD02FD;
const unsigned long STOP = 0xFD00FF;
const unsigned long AUDIO = 0xFDC03F;
const unsigned long RED = 0xFD42BD;
const unsigned long GREEN = 0xFD02FD;
const unsigned long YELLOW = 0xFD00FF;
const unsigned long BLUE = 0xFDC03F;

void setup()
{

}

void loop() {
  int khz = 38; // 38kHz carrier frequency for the NEC protocol
  unsigned int volUp[] = {9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 39416, 9000, 2210, 560}; //AnalysIR Batch Export (IRremote) - RAW
  
  //irsend.sendRaw(volUp, sizeof(volUp) / sizeof(volUp[0]), khz); //Note the approach used to automatically calculate the size of the array.
  irsend.sendNEC(0xFDD827, 32);
  delay(2000); //In this example, the signal will be repeated every 5 seconds, approximately.
}
