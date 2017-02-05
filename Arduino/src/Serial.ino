// f = frente
// b = trás
// r = direita
// l = esqerda
// s = stop
//
// 1 = r1_on
// 2 = r2_on
// 3 = r3_on
// 4 = r4_on
// 5 = r1_off
// 6 = r2_off
// 7 = r3_off
// 8 = r4_off
//
// x = up_ro
// y = up_phi
// z = down_ro
// w = down_phi

char serialdata = "";

void serial_setup(){
  Serial.begin(115200);
}

void serial_loop(){
  while(Serial.available() > 0){
    serialdata = Serial.read();
  }

  switch(serialdata){
    // forward
    case 'f':{
      forward();
      break;
    }
    // back
    case 'b':{
      backwards();
      break;
    }
    // stop
    case 's':{
      stop();
      break;
    }
    // left
    case 'l':{
      left();
      break;
    }
    // right
    case 'r':{
      right();
      break;
    }
    // Relay 1 on
    case '1':{
      relay_on(1);
      break;
    }
    // Relay 1 on
    case '2':{
      relay_on(2);
      break;
    }
    // Relay 1 on
    case '3':{
      relay_on(3);
      break;
    }
    // Relay 1 on
    case '4':{
      relay_on(4);
      break;
    }
    // Relay 1 off
    case '5':{
      relay_off(1);
      break;
    }
    // Relay 2 off
    case '6':{
      relay_off(2);
      break;
    }
    // Relay 3 off
    case '7':{
      relay_off(3);
      break;
    }
    // Relay 4 off
    case '8':{
      relay_off(4);
      break;
    }
    // Up ro
    case 'x':{
      up_ro();
      break;
    }
    // Up phi
    case 'y':{
      up_phi();
      break;
    }
    // Down ro
    case 'z':{
      down_ro();
      break;
    }
    // Down phi
    case 'w':{
      down_phi();
      break;
    }

  }
  serialdata = "";
}
