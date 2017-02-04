#include <Adafruit_NeoPixel.h>

#define PIN            15
#define NUMPIXELS      57
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 500; // delay for half a second

void frontled_setup(){
  pixels.begin(); // This initializes the NeoPixel library.
}

void frontled_loop(){
    for(int i=0;i<NUMPIXELS;i++){
      pixels.setPixelColor(i, pixels.Color(0,15,0)); // Moderately bright green color.
      pixels.show(); // This sends the updated pixel color to the hardware.
    }
}
