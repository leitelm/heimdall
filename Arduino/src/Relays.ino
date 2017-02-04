int relay_pin[] = {3,2,5,4};
bool relay_status[] = {false,false,false,false};

void relay_setup(){
  for (int i=0; i<=3; i++){
    pinMode(relay_pin[i], OUTPUT);
    digitalWrite(relay_pin[i],HIGH);
  }
}

void relay_loop(){
}

void loop_all_relays(){
  for (int i=1; i<=4; i++){
    relay_on(i);
    delay(500);
    relay_off(i);
    delay(500);
  }
}

void relay_on(int n){
  switch (n) {
    case 1:
      digitalWrite(relay_pin[0], LOW);
      relay_status[0] = true;
      break;
    case 2:
      digitalWrite(relay_pin[1], LOW);
      relay_status[0] = true;
      break;
    case 3:
      digitalWrite(relay_pin[2], LOW);
      relay_status[0] = true;
      break;
    case 4:
      digitalWrite(relay_pin[3], LOW);
      relay_status[0] = true;
      break;
  }
}

void relay_off(int n){
  switch (n) {
    case 1:
      digitalWrite(relay_pin[0], HIGH);
      relay_status[0] = false;
      break;
    case 2:
      digitalWrite(relay_pin[1], HIGH);
      relay_status[0] = false;
      break;
    case 3:
      digitalWrite(relay_pin[2], HIGH);
      relay_status[0] = false;
      break;
    case 4:
      digitalWrite(relay_pin[3], HIGH);
      relay_status[0] = false;
      break;
  }
}
