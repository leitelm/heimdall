//Esse arquivo chama as funções de setup e loop de cada módulo.

void setup(){
  relay_setup();
  frontled_setup();
  ponteh_setup();
  serial_setup();
  test_ponteh();
}

void loop(){
  relay_loop();
  frontled_loop();
  char serialData = serial_loop();

  if(serialData == 'f'){
    velocity1 = 200;
    velocity2 = 200;
  }
  if(serialData == 'b'){
    velocity1 = -200;
    velocity2 = -200;
  }
  if(serialData == 's'){
    velocity1 = 0;
    velocity2 = 0;
  }
  if(serialData == 'l'){
    velocity1 = 200;
    velocity2 = -200;
  }
  if(serialData == 'r'){
    velocity1 = -200;
    velocity2 = 200;
  }
  ponteh_loop();
}
