void serial_setup(){
  Serial.begin(115200);
}

char serial_loop(){
  char serialData = 0;
  if (Serial.available() > 0){
    serialData = Serial.read();
    Serial.println(serialData);
  }
  return serialData;
}
