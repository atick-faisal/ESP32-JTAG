#define RGB_PIN 38
#define NUM_LEDS 1

#include <Arduino.h>
#include <FastLED.h>

CRGB leds[NUM_LEDS];

void setup() {
    CFastLED::addLeds<WS2812B, RGB_PIN, GRB>(leds, NUM_LEDS);
    FastLED.setBrightness(50);
}

void loop() {
    // Red
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(1000);

    // Green
    leds[0] = CRGB::Green;
    FastLED.show();
    delay(1000);

    // Blue
    leds[0] = CRGB::Blue;
    FastLED.show();
    delay(1000);

    // Rainbow fade
    for (int i = 0; i < 255; i++) {
        leds[0] = CHSV(i, 255, 255);
        FastLED.show();
        delay(20);
    }
}
