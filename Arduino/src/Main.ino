//Esse arquivo chama as funções de setup e loop de cada módulo.
int velocity1=0;
int velocity2=0;
void setup(){
  serial_setup();
  ponteh_setup();
  pantilt_setup();
  relay_setup();

  // frontled_setup();
}

void loop(){
  serial_loop();
  ponteh_loop();
  pantilt_loop();
  relay_loop();

  // frontled_loop();
}
