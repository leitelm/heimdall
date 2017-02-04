//Esse arquivo chama as funções de setup e loop de cada módulo.

void setup(){
  relay_setup();
  frontled_setup();
}

void loop(){
  relay_loop();
  frontled_loop();
}
