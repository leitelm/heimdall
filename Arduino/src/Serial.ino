char serialdata = "";

void serial_setup(){
  Serial.begin(115200);
}

void serial_loop(){
  while(Serial.available() > 0){
    serialdata = Serial.read();
  }

  switch(serialdata){
    case 'f':{
      velocity1 = 200;
      velocity2 = 200;
      Serial.println('f');
      break;
    }
    case 'r':{
      velocity1 = -200;
      velocity2 = -200;
      Serial.println('r');
      break;
    }
    case 's':{
      velocity1 = 0;
      velocity2 = 0;
      Serial.println('s');
      break;
    }
    case '+':{
      velocity1 = velocity1 + 50;
      velocity2 = velocity2 +50;
      Serial.println('+');
      break;
    }
    case '-':{
      velocity1 = velocity1 - 50;
      velocity2 = velocity2 - 50;
      Serial.println('-');
      break;
    }
  }
  serialdata = "";
}
