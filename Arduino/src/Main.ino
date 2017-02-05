int velocity1=0;
int velocity2=0;
void setup(){
  serial_setup();
  pantilt_setup();
  ponteh_setup();
  
}

void loop(){
  serial_loop();
  ponteh_loop();
  pantilt_loop();
}
