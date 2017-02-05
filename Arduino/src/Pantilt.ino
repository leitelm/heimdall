#include <Servo.h>

// Pins
#define ro_pin 30
#define phi_pin 31

// velocity
int step = 5;  //degrees
int tick_interval = 50; //ms

// Horizontal coord
int ro = 50;
const int ro_min = 0;
const int ro_center = 50;
const int ro_max = 180;

// Vertical coord
int phi = 90;
const int phi_min = 0;
const int phi_center = 90;
const int phi_max = 180;

// Servo object
Servo roServo;
Servo phiServo;

void pantilt_setup() {
  roServo.attach(ro_pin);
  roServo.write(ro);

  phiServo.attach(phi_pin);
  phiServo.write(phi);
}

void pantilt_loop() {
  update_servos();
}

// Update servos
void update_servos(){
  static int prev_ro = 0;
  static int prev_phi = 0;

  if (prev_ro != ro){
    roServo.write(ro);
    prev_ro = ro;
  }

  if (prev_phi != phi){
    phiServo.write(phi);
    prev_phi = phi;
  }

}

void center_ro(){
  ro = center_ro;
}

void center_phi(){
  phi = center_phi;
}

void up_ro(){
  static long next_update = 0;
  if (millis() > next_update){
    ro += step;
    if (ro >= ro_max){
      ro = ro_max;
    }
    next_update = millis() + tick_interval;
  }
}

void down_ro(){
  static long next_update = 0;
  if (millis() > next_update){
    ro -= step;
    if (ro <= ro_min){
      ro = ro_min;
    }
    next_update = millis() + tick_interval;
  }
}

void up_phi(){
  static long next_update = 0;
  if (millis() > next_update){
    phi += step;
    if (phi >= phi_max){
      phi = phi_max;
    }
    next_update = millis() + tick_interval;
  }
}

void down_phi(){
  static long next_update = 0;
  if (millis() > next_update){
    phi -= step;
    if (phi <= phi_min){
      phi = phi_min;
    }
    next_update = millis() + tick_interval;
  }
}
