// #include <IRremote.h>

// const int pinBtn = 2; // Ubah nilai pinBtn sesuai kebutuhan
// IRsend mySender; // Deklarasi IRsend object

// #define RAW_DATA_LEN 60
// uint16_t rawDataOn[RAW_DATA_LEN] = {
//   8622, 4134, 450, 1602, 426, 594, 426, 590, 
//   422, 594, 426, 1618, 426, 586, 426, 594, 
//   426, 594, 422, 1614, 426, 1614, 422, 598, 
//   426, 590, 422, 598, 422, 594, 426, 594, 
//   426, 594, 422, 598, 426, 590, 422, 598, 
//   426, 590, 426, 594, 426, 1614, 426, 590, 
//   426, 1614, 422, 598, 426, 590, 422, 594, 
//   426, 1618, 422, 1000
// };

// void setup() {
//   pinMode(13, OUTPUT);
//   pinMode(pinBtn, INPUT);
//   Serial.begin(9600);
//   delay(2000);
// }

// void loop() {
//   int numberOfRepeats = 3;

//   for (int i = 0; i < numberOfRepeats; i++) {
//     mySender.send(rawDataOn, RAW_DATA_LEN, 36); 
//     Serial.println(F("AC Switched OFF"));
//     delay(500); // Delay antara pengiriman ulang sinyal IR
//   }

//   delay(1000);  // Delay sebelum iterasi selanjutnya
// }
