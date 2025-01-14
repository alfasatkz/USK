#include <Arduino.h>

/*

                        Created by Azat (@azataiot) on Sep.5 2020
 */

/*
 * Note:
 * 1. Language of the Source Code : C++
 * 2. C++ Supported Version ( >= C++ 11 )
 * 3. Build Tool: GCC >=7.2
 * 4. MAKE version: >= 2.8.4
 * 5. Target Platform: Arduino
 * 6. Build Tested on:
 *    macOS (clang-1103.0.32.62) PASS ✅ (05.09.2020)
 *    Linux (gcc 10.2.0) PASS ✅ (05.09.2020)
 *    Raspberry OS Linux (aa64 bit, gcc 9.1) Failed 🚫 (05.09.2020)
 * 7. Documentation and Other Reference:   https://azat.cc/2020/09/03/unisat-unisat-protocol.html
 */



// including libraries and headers

// include  C++ type support for Arduino
#ifdef __AVR__
extern "C"
{
#include <stdio.h>   // DO NOT DELETE EVEN IDE WARNING !!!
}
#else
#include <stdio.h>
#include <stdarg.h> // ARM tools don't include this in stdio.h
#endif

// Include Software Serial
#include <SoftwareSerial.h>


/* Global Variables Definition */
//
// Message Length
#define MAXIMUM_MESSAGE_LENGTH 64

// Communication Node Address
#define ADDR_OBC 0x00
#define ADDR_EPS 0x01
#define ADDR_TRX 0x02
#define ADDR_TOP 0x03
#define ADDR_SB 0x04
#define ADDR_GS_HW 0x0C
#define ADDR_GS_PC 0x0D

// Constant Variables
#define SPACE 0x20

/* Variable Definition */
//
// assuming maximum incoming message length 64 byte.
const byte numBytes = MAXIMUM_MESSAGE_LENGTH;
byte receivedBytes[numBytes];
byte numReceived = 0;
boolean newData = false;

// ACP Frame
uint8_t destination[4];
uint8_t source[4];
uint8_t dateLen;
uint16_t crcFrom;
uint16_t crcCalc;

/* Instantiation */
//
// Software Serial
SoftwareSerial softSerial(2, 3); // RX, TX

/* Functions */
//
void recvBytes();

void parseBytes();


/* Arduino Setup */
//
void setup() {
    // Hardware Serial Setup
    Serial.begin(9600);
    // Software Serial Setup
    softSerial.begin(9600);
    // BME680 Initialization  BME
    // BNO055 Initialization  BNO
    // Geiger Counter Initialization  GG
    // SI1145 Initialization SI
    /* ONLY FOR TEST : START */
    // LCD Initialization LCD
    /* ONLY FOR TEST : END */
}

/* Arduino Infinite Loop */
//
void loop() {

}



/* Communication */
/*
 * 1. recvBytes: Receives and Saves the Byte Data Coming From the Serial Port (RS485)
 * 2. parseBytes: Parses the Received Packet and Gets: Header(Destination, Header), Data Length, Data and CRC.
 * 3. calcCRC: Calculates CRC for the Data.
 * 4. checkCRC: Validate the CRC.
 *
 */

void recvBytes() {

}

void parseBytes() {

}