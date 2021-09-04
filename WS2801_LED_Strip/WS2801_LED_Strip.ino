#include <FastLED.h>
#define LED_PIN 4
#define NUM_LEDS 66

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812,LED_PIN,GRB>(leds, NUM_LEDS);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    leds[0] = CRGB::White; FastLED.show(); delay(500);
    leds[1] = CRGB::Blue; FastLED.show(); delay(500);
    leds[2] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[3] = CRGB::Red; FastLED.show(); delay(500);
    leds[4] = CRGB::Green; FastLED.show(); delay(500);
    leds[5] = CRGB::White; FastLED.show(); delay(500);
    leds[6] = CRGB::Blue; FastLED.show(); delay(500);
    leds[7] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[8] = CRGB::Red; FastLED.show(); delay(500);
    leds[9] = CRGB::Green; FastLED.show(); delay(500);

    leds[10] = CRGB::White; FastLED.show(); delay(500);
    leds[11] = CRGB::Blue; FastLED.show(); delay(500);
    leds[12] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[13] = CRGB::Red; FastLED.show(); delay(500);
    leds[14] = CRGB::Green; FastLED.show(); delay(500);
    leds[15] = CRGB::White; FastLED.show(); delay(500);
    leds[16] = CRGB::Blue; FastLED.show(); delay(500);
    leds[17] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[18] = CRGB::Red; FastLED.show(); delay(500);
    leds[19] = CRGB::Green; FastLED.show(); delay(500);

    leds[20] = CRGB::White; FastLED.show(); delay(500);
    leds[21] = CRGB::Blue; FastLED.show(); delay(500);
    leds[22] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[23] = CRGB::Red; FastLED.show(); delay(500);
    leds[24] = CRGB::Green; FastLED.show(); delay(500);
    
    leds[48] = CRGB::White; FastLED.show(); delay(500);
    leds[49] = CRGB::Blue; FastLED.show(); delay(500);
    leds[50] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[51] = CRGB::Red; FastLED.show(); delay(500);
    leds[52] = CRGB::Green; FastLED.show(); delay(500);
    leds[53] = CRGB::White; FastLED.show(); delay(500);
    leds[54] = CRGB::Blue; FastLED.show(); delay(500);
    leds[55] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[56] = CRGB::Red; FastLED.show(); delay(500);
    leds[57] = CRGB::Green; FastLED.show(); delay(500);

    leds[58] = CRGB::White; FastLED.show(); delay(500);
    leds[59] = CRGB::Blue; FastLED.show(); delay(500);
    leds[60] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[61] = CRGB::Red; FastLED.show(); delay(500);
    leds[62] = CRGB::Green; FastLED.show(); delay(500);
    leds[63] = CRGB::White; FastLED.show(); delay(500);
    leds[64] = CRGB::Blue; FastLED.show(); delay(500);
    leds[65] = CRGB::Yellow; FastLED.show(); delay(500);
    leds[66] = CRGB::Red; FastLED.show(); delay(500);
    
    
    leds[0] = CRGB::Black; FastLED.show(); delay(500);
    leds[1] = CRGB::Black; FastLED.show(); delay(500);
    leds[2] = CRGB::Black; FastLED.show(); delay(500);
    leds[3] = CRGB::Black; FastLED.show(); delay(500);
    leds[4] = CRGB::Black; FastLED.show(); delay(500);
    leds[5] = CRGB::Black; FastLED.show(); delay(500);
    leds[6] = CRGB::Black; FastLED.show(); delay(500);
    leds[7] = CRGB::Black; FastLED.show(); delay(500);
    leds[8] = CRGB::Black; FastLED.show(); delay(500);
    leds[9] = CRGB::Black; FastLED.show(); delay(500);
    
  // put your main code here, to run repeatedly:
 
}
