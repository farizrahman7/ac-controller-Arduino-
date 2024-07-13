
#include <IRLibSendBase.h>    //We need the base code
#include <IRLib_HashRaw.h>    //Only use raw sender

IRsendRaw mySender;

int pinBtn = 2;
int acState = 0;
int btnNewState;
int btnOldState = 1;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(pinBtn, INPUT);
  Serial.begin(9600);
  delay(2000);

}

// 
// #define RAW_DATA_LEN 60
// uint16_t rawDataOn[RAW_DATA_LEN] = {
//   8622, 4138, 454, 1598, 426, 594, 430, 586, 
// 	426, 590, 426, 1618, 426, 590, 422, 594, 
// 	426, 598, 426, 590, 426, 590, 426, 594, 
// 	422, 598, 426, 1610, 422, 598, 422, 598, 
// 	426, 594, 426, 590, 422, 1614, 426, 1610, 
// 	426, 594, 426, 594, 426, 1610, 426, 594, 
// 	422, 594, 426, 598, 422, 594, 422, 1618, 
// 	422, 598, 426, 1000
// };

//off
// #define RAW_DATA_LEN 60
// uint16_t rawDataOn[RAW_DATA_LEN] = {
//   8622, 4134, 450, 1602, 426, 594, 426, 590, 
// 	422, 594, 426, 1618, 426, 586, 426, 594, 
// 	426, 594, 422, 1614, 426, 1614, 422, 598, 
// 	426, 590, 422, 598, 422, 594, 426, 594, 
// 	426, 594, 422, 598, 426, 590, 422, 598, 
// 	426, 590, 426, 594, 426, 1614, 426, 590, 
// 	426, 1614, 422, 598, 426, 590, 422, 594, 
// 	426, 1618, 422, 1000
// };



// #define RAW_DATA_LEN 60
// uint16_t rawDataOff[RAW_DATA_LEN] = {
//   8622, 4166, 430, 1598, 426, 598, 422, 594, 
// 	426, 594, 422, 1618, 422, 590, 426, 594, 
// 	426, 594, 422, 598, 426, 590, 426, 594, 
// 	426, 594, 422, 1614, 422, 598, 422, 594, 
// 	426, 598, 422, 594, 422, 1614, 422, 602, 
// 	426, 1606, 422, 598, 422, 1618, 426, 590, 
// 	422, 594, 426, 598, 422, 594, 422, 598, 
// 	422, 1614, 426, 1000
// };

//on

// #define RAW_DATA_LEN 60
// uint16_t rawDataOff[RAW_DATA_LEN] = {
//   8622, 4166, 430, 1598, 422, 594, 426, 594, 
// 	422, 598, 426, 1614, 422, 594, 426, 590, 
// 	426, 594, 426, 594, 422, 598, 422, 594, 
// 	426, 594, 426, 594, 426, 590, 426, 594, 
// 	426, 594, 422, 594, 426, 1614, 422, 598, 
// 	422, 1614, 426, 594, 422, 1614, 422, 598, 
// 	422, 594, 426, 1610, 426, 594, 426, 594, 
// 	426, 1610, 426, 1000
// };


void loop() {
  // btnNewState = digitalRead(pinBtn);
  // serial.println(acState)




  // if (btnOldState == 0 && btnNewState == 1) {

  //   if (acState == 0) {
  //     digitalWrite(13, HIGH);
  //     mySender.send(rawDataOn, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
  //     // mySender.send(rawDataOn, RAW_DATA_LEN, 244); //Pass the buffer,length, optionally frequency
  //     Serial.println(F("AC Switched On"));
  //     acState = 1;
  //   }
  //   else {
  //     digitalWrite(13, LOW);
  //     mySender.send(rawDataOff, RAW_DATA_LEN, 36); //Pass theS buffer,length, optionally frequency
  //     // mySender.send(rawDataOff, RAW_DATA_LEN, 244); //Pass the buffer,length, optionally frequency
  //     Serial.println(F("AC Switched Off"));
  //     acState = 0;
  //   }
  // }

  // btnOldState = btnNewState;
  // delay(100);


// mySender.send(rawDataOn, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
// Serial.println(F("AC Switched OFF"));
// delay(2000);
// mySender.send(rawDataOff, RAW_DATA_LEN, 36); //Pass theS buffer,length, optionally frequency
// Serial.println(F("AC Switched ON"));
// delay(2000);


//   int nomorpengulangan = 3;

//   for (int a = 0 ; a < nomorpengulangan ; a++){
//   mySender.send(rawDataOn, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
//   Serial.println(F("AC Switched UP"));
//   delay(2000);
// }
//   delay (1000);
  Turun();
  // Naik();
  // Mati();
  // Nyala();
}
