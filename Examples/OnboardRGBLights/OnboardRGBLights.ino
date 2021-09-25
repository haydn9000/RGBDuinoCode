#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif

#define RGB1 12  // Onboard RGB pin
#define RGB2 13  // Onboard RGB pin

int brightness = 15;  // Can be a value between 0-255.

/*
Parameter 1 = number of pixels in strip1
Parameter 2 = Arduino pin number (most are valid)
Parameter 3 = pixel type flags, add together as needed:
  NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
  NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
  NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
  NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
  NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
and minimize distance between Arduino and first pixel.  Avoid connecting
on a live circuit...if you must, connect GND first.
*/

Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(1, RGB1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(1, RGB2, NEO_GRB + NEO_KHZ800);


void setup()
{
    // Innitialize RGB
    strip1.begin();
    strip2.begin();
    // Initialize all RGB pixels to "OFF"
    strip1.show();
    strip2.show();
}


void loop()
{
    strip1.setPixelColor(0, strip1.Color(0, 255, 0));  // Green
    strip1.setBrightness(brightness);
    strip1.show();
    delay(100);

    strip2.setPixelColor(0, strip2.Color(0, 255, 0));  // Green
    strip2.setBrightness(brightness);
    strip2.show();
    delay(100);
}
