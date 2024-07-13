// turunin suhu
#define RAW_DATA_LEN 60
uint16_t rawDataDown[RAW_DATA_LEN] = {
  8626, 4146, 454, 1598, 422, 598, 426, 586, 
	426, 594, 426, 1614, 430, 586, 426, 594, 
	426, 590, 426, 598, 430, 586, 426, 594, 
	426, 590, 426, 1614, 426, 594, 426, 590, 
	422, 598, 426, 590, 426, 1614, 426, 598, 
	426, 586, 426, 594, 422, 1618, 426, 590, 
	422, 594, 426, 594, 426, 598, 426, 590, 
	426, 590, 426, 1000
};

//naikkin suhu
#define RAW_DATA_LEN 60
uint16_t rawDataUp[RAW_DATA_LEN] = {
  8622, 4150, 454, 1594, 426, 598, 426, 590, 
	422, 594, 426, 1614, 430, 586, 426, 594, 
	426, 594, 422, 598, 430, 586, 426, 594, 
	422, 594, 426, 1614, 422, 598, 422, 594, 
	426, 594, 430, 586, 426, 1614, 426, 598, 
	426, 1606, 426, 594, 426, 1610, 422, 598, 
	422, 598, 426, 594, 426, 590, 422, 594, 
	426, 1614, 430, 1000
};

//naikkin matikan
#define RAW_DATA_LEN 60
uint16_t rawDataOff[RAW_DATA_LEN] = {
  8622, 4134, 454, 1598, 422, 598, 426, 590, 
	426, 594, 422, 1618, 426, 590, 426, 590, 
	426, 594, 426, 1610, 426, 1614, 426, 594, 
	430, 586, 426, 594, 430, 590, 422, 598, 
	426, 590, 426, 594, 422, 594, 426, 594, 
	426, 594, 422, 594, 426, 1614, 430, 590, 
	422, 1610, 426, 598, 426, 590, 426, 594, 
	422, 1618, 426, 1000
};

//naikkin nyala
#define RAW_DATA_LEN 60
uint16_t rawDataOn[RAW_DATA_LEN] = {
  8626, 4142, 454, 1594, 426, 594, 422, 598, 
	422, 594, 426, 1614, 426, 590, 426, 594, 
	426, 594, 450, 566, 426, 594, 426, 594, 
	430, 590, 422, 594, 426, 594, 426, 594, 
	422, 594, 426, 594, 426, 1610, 426, 594, 
	426, 1610, 426, 594, 422, 1614, 426, 594, 
	426, 594, 422, 1614, 426, 594, 422, 594, 
	426, 1614, 426, 1000
};



void Turun(){
  int suhudown = 3;
  for (int a = 0 ; a < suhudown ; a++){
  mySender.send(rawDataDown, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
  Serial.println(F("AC nurunin suhu"));
  delay(1000);
  }
  // delay (500);
}

void Naik(){
  int suhuup = 3;
  for (int a = 0 ; a < suhuup ; a++){
  mySender.send(rawDataUp, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
  Serial.println(F("AC naikkin suhu"));
  delay(1000);
  }
  // delay (500);
}

void Mati(){
  // int mati = 3;
  // for (int a = 0 ; a < mati ; a++){
  mySender.send(rawDataOff, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
  Serial.println(F("AC matiin Ac"));
  delay(1000);
  // }
  // delay (500)
}

void Nyala(){
  // int mati = 3;
  // for (int a = 0 ; a < mati ; a++){
  mySender.send(rawDataOn, RAW_DATA_LEN, 36); //Pass the buffer,length, optionally frequency
  Serial.println(F("AC nyalain Ac"));
  delay(1000);
  // }
  // delay (500)
}