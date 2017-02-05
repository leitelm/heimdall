//Esse arquivo chama as funções de setup e loop de cada módulo.
int velocity1=0;
int velocity2=0;
void setup(){
  serial_setup();
  relay_setup();
  //frontled_setup();
  ponteh_setup();
  //test_ponteh();
}

void loop(){
  serial_loop();
  relay_loop();
  //frontled_loop();
  ponteh_loop();
}
