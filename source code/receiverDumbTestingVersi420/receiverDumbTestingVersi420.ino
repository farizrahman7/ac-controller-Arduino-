// Include IR Remote Library by Ken Shirriff
// #include <IRremote.h>
#include <IRremote.hpp>
 
// Define sensor pin
// const int RECV_PIN = 2;
#define IR_RECEIVE_PIN 2
 
// Define IR Receiver and Results Objects
// IRrecv irrecv(RECV_PIN);
// decode_results results;
 
 
void setup(){
  // Serial Monitor @ 9600 baud
  Serial.begin(9600);
  // Enable the IR Receiver
  // irrecv.enableIRIn();
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
}
 
void loop(){
  // if (irrecv.decode(&results)){
  //   // Print Code in HEX
  //       Serial.println(results.value, HEX);
  //       irrecv.resume();
  // }

  if (IrReceiver.decode()) {
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print "old" raw data
      // USE NEW 3.x FUNCTIONS
      IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
      IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data
      IrReceiver.resume(); // Enable receiving of the next value
  }
}