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
#include <SoftwareSerial.h>

// Yellow - 7
// L/Orange - 6
// Orange - VCC 
// BROWN - GND
SoftwareSerial SerialBt(7, 6);

char incoming;
String btn = "";
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
	Serial.begin(9600);
	SerialBt.begin(9600);
}

void send_ir(String btn_val){
  //  irsend.sendNEC(0xFDD827, 32);
  

  if(btn_val.equals("POWER")){
    irsend.sendNEC(POWER, 32);
  } else if(btn_val.equals("REC")) {
    irsend.sendNEC(REC, 32);
  } else if(btn_val.equals("MUTE")) {
    irsend.sendNEC(MUTE, 32);
  } else if(btn_val.equals("EPG")) {
    irsend.sendNEC(EPG, 32);
  } else if(btn_val.equals("P_PLUS")) {
    irsend.sendNEC(P_PLUS, 32);
  } else if(btn_val.equals("TTX")) {
    irsend.sendNEC(TTX, 32);
  } else if(btn_val.equals("INFO")) {
    irsend.sendNEC(INFO, 32);
  } else if(btn_val.equals("UP")) {
    irsend.sendNEC(UP, 32);
  } else if(btn_val.equals("EXIT")) {
    irsend.sendNEC(EXIT, 32);
  } else if(btn_val.equals("V_MINUS")) {
    irsend.sendNEC(V_MINUS, 32);
  } else if(btn_val.equals("OK")) {
    irsend.sendNEC(OK, 32);
  } else if(btn_val.equals("V_PLUS")) {
    irsend.sendNEC(V_PLUS, 32);
  } else if(btn_val.equals("DOWN")) {
    irsend.sendNEC(DOWN, 32);
  } else if(btn_val.equals("FAV")) {
    irsend.sendNEC(FAV, 32);
  } else if(btn_val.equals("TV_RADIO")) {
    irsend.sendNEC(TV_RADIO, 32);
  } else if(btn_val.equals("ONE")) {
    irsend.sendNEC(ONE, 32);
  } else if(btn_val.equals("TWO")) {
    irsend.sendNEC(TWO, 32);
  } else if(btn_val.equals("THREE")) {
    irsend.sendNEC(THREE, 32);
  } else if(btn_val.equals("FOUR")) {
    irsend.sendNEC(FOUR, 32);
  } else if(btn_val.equals("FIVE")) {
    irsend.sendNEC(FIVE, 32);
  } else if(btn_val.equals("SIX")) {
    irsend.sendNEC(SIX, 32);
  } else if(btn_val.equals("SEVEN")) {
    irsend.sendNEC(SEVEN, 32);
  } else if(btn_val.equals("EIGHT")) {
    irsend.sendNEC(EIGHT, 32);
  } else if(btn_val.equals("NINE")) {
    irsend.sendNEC(NINE, 32);
  } else if(btn_val.equals("ZERO")) {
    irsend.sendNEC(ZERO, 32);
  } else if(btn_val.equals("RECALL")) {
    irsend.sendNEC(RECALL, 32);
  } else if(btn_val.equals("SAT")) {
    irsend.sendNEC(SAT, 32);
  } else if(btn_val.equals("REV")) {
    irsend.sendNEC(REV, 32);
  } else if(btn_val.equals("FWD")) {
    irsend.sendNEC(FWD, 32);
  } else if(btn_val.equals("PREV")) {
    irsend.sendNEC(PREV, 32);
  } else if(btn_val.equals("NEXT")) {
    irsend.sendNEC(NEXT, 32);
  } else if(btn_val.equals("PLAY")) {
    irsend.sendNEC(PLAY, 32);
  } else if(btn_val.equals("PAUSE")) {
    irsend.sendNEC(PAUSE, 32);
  } else if(btn_val.equals("STOP")) {
    irsend.sendNEC(STOP, 32);
  } else if(btn_val.equals("AUDIO")) {
    irsend.sendNEC(AUDIO, 32);
  } else if(btn_val.equals("RED")) {
    irsend.sendNEC(RED, 32);
  } else if(btn_val.equals("GREEN")) {
    irsend.sendNEC(GREEN, 32);
  } else if(btn_val.equals("YELLOW")) {
    irsend.sendNEC(YELLOW, 32);
  } else if(btn_val.equals("BLUE")) {
    irsend.sendNEC(BLUE, 32);
  } else {
    Serial.println("unknown");
  }
  delay(100);
}
void loop() {
  while(SerialBt.available()) {
    incoming = char(SerialBt.read());
    if(String(incoming) == "\n"){
        Serial.println(btn);
        send_ir(btn);
        btn = "";
      } else {
        btn += String(incoming);        
      }
    }	
}
