#include <FastLED.h>
#define LED_PIN 4
#define NUM_LEDS 70

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

CRGB leds[NUM_LEDS];

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812,LED_PIN,GRB>(leds, NUM_LEDS);
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Ultrasonic Sensor Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  int val;
  val=analogRead(3);   //connect mic sensor to Analog 0
  Serial.print("Sound Sensor Reading: ");
  Serial.println(val,DEC);//print the sound value to serial

  if (distance < 100 or val > 100){
    leds[0] = CRGB::White; FastLED.show(); delay(50);
    leds[1] = CRGB::Blue; FastLED.show(); delay(50);
    leds[2] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[3] = CRGB::Red; FastLED.show(); delay(50);
    leds[4] = CRGB::Green; FastLED.show(); delay(50);
    leds[5] = CRGB::White; FastLED.show(); delay(50);
    leds[6] = CRGB::Blue; FastLED.show(); delay(50);
    leds[7] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[8] = CRGB::Red; FastLED.show(); delay(50);
    leds[9] = CRGB::Green; FastLED.show(); delay(50);

    leds[10] = CRGB::White; FastLED.show(); delay(50);
    leds[11] = CRGB::Blue; FastLED.show(); delay(50);
    leds[12] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[13] = CRGB::Red; FastLED.show(); delay(50);
    leds[14] = CRGB::Green; FastLED.show(); delay(50);
    leds[15] = CRGB::White; FastLED.show(); delay(50);
    leds[16] = CRGB::Blue; FastLED.show(); delay(50);
    leds[17] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[18] = CRGB::Red; FastLED.show(); delay(50);
    leds[19] = CRGB::Green; FastLED.show(); delay(50);

    leds[20] = CRGB::White; FastLED.show(); delay(50);
    leds[21] = CRGB::Blue; FastLED.show(); delay(50);
    leds[22] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[23] = CRGB::Red; FastLED.show(); delay(50);
    leds[24] = CRGB::Green; FastLED.show(); delay(50);
    leds[25] = CRGB::White; FastLED.show(); delay(50);
    leds[26] = CRGB::Blue; FastLED.show(); delay(50);

    leds[48] = CRGB::White; FastLED.show(); delay(50);
    leds[49] = CRGB::Blue; FastLED.show(); delay(50);
    leds[50] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[51] = CRGB::Red; FastLED.show(); delay(50);
    leds[52] = CRGB::Green; FastLED.show(); delay(50);
    leds[53] = CRGB::White; FastLED.show(); delay(50);
    leds[54] = CRGB::Blue; FastLED.show(); delay(50);
    leds[55] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[56] = CRGB::Red; FastLED.show(); delay(50);
    leds[57] = CRGB::Green; FastLED.show(); delay(50);

    leds[58] = CRGB::White; FastLED.show(); delay(50);
    leds[59] = CRGB::Blue; FastLED.show(); delay(50);
    leds[60] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[61] = CRGB::Red; FastLED.show(); delay(50);
    leds[62] = CRGB::Green; FastLED.show(); delay(50);
    leds[63] = CRGB::White; FastLED.show(); delay(50);
    leds[64] = CRGB::Blue; FastLED.show(); delay(50);
    leds[65] = CRGB::Yellow; FastLED.show(); delay(50);
    leds[66] = CRGB::Red; FastLED.show(); delay(50);
    leds[67] = CRGB::Green; FastLED.show(); delay(50);
    leds[68] = CRGB::White; FastLED.show(); delay(50);
    leds[69] = CRGB::Blue; FastLED.show(); delay(50);
    leds[70] = CRGB::Yellow; FastLED.show(); delay(50);
  }
  else{
    leds[0] = CRGB::Black; FastLED.show(); delay(50);
    leds[1] = CRGB::Black; FastLED.show(); delay(50);
    leds[2] = CRGB::Black; FastLED.show(); delay(50);
    leds[3] = CRGB::Black; FastLED.show(); delay(50);
    leds[4] = CRGB::Black; FastLED.show(); delay(50);
    leds[5] = CRGB::Black; FastLED.show(); delay(50);
    leds[6] = CRGB::Black; FastLED.show(); delay(50);
    leds[7] = CRGB::Black; FastLED.show(); delay(50);
    leds[8] = CRGB::Black; FastLED.show(); delay(50);
    leds[9] = CRGB::Black; FastLED.show(); delay(50);

    leds[10] = CRGB::Black; FastLED.show(); delay(50);
    leds[11] = CRGB::Black; FastLED.show(); delay(50);
    leds[12] = CRGB::Black; FastLED.show(); delay(50);
    leds[13] = CRGB::Black; FastLED.show(); delay(50);
    leds[14] = CRGB::Black; FastLED.show(); delay(50);
    leds[15] = CRGB::Black; FastLED.show(); delay(50);
    leds[16] = CRGB::Black; FastLED.show(); delay(50);
    leds[17] = CRGB::Black; FastLED.show(); delay(50);
    leds[18] = CRGB::Black; FastLED.show(); delay(50);
    leds[19] = CRGB::Black; FastLED.show(); delay(50);

    leds[20] = CRGB::Black; FastLED.show(); delay(50);
    leds[21] = CRGB::Black; FastLED.show(); delay(50);
    leds[22] = CRGB::Black; FastLED.show(); delay(50);
    leds[23] = CRGB::Black; FastLED.show(); delay(50);
    leds[24] = CRGB::Black; FastLED.show(); delay(50);
    leds[25] = CRGB::Black; FastLED.show(); delay(50);
    leds[26] = CRGB::Black; FastLED.show(); delay(50);

    leds[48] = CRGB::Black; FastLED.show(); delay(50);
    leds[49] = CRGB::Black; FastLED.show(); delay(50);
    leds[50] = CRGB::Black; FastLED.show(); delay(50);
    leds[51] = CRGB::Black; FastLED.show(); delay(50);
    leds[52] = CRGB::Black; FastLED.show(); delay(50);
    leds[53] = CRGB::Black; FastLED.show(); delay(50);
    leds[54] = CRGB::Black; FastLED.show(); delay(50);
    leds[55] = CRGB::Black; FastLED.show(); delay(50);
    leds[56] = CRGB::Black; FastLED.show(); delay(50);
    leds[57] = CRGB::Black; FastLED.show(); delay(50);

    leds[58] = CRGB::Black; FastLED.show(); delay(50);
    leds[59] = CRGB::Black; FastLED.show(); delay(50);
    leds[60] = CRGB::Black; FastLED.show(); delay(50);
    leds[61] = CRGB::Black; FastLED.show(); delay(50);
    leds[62] = CRGB::Black; FastLED.show(); delay(50);
    leds[63] = CRGB::Black; FastLED.show(); delay(50);
    leds[64] = CRGB::Black; FastLED.show(); delay(50);
    leds[65] = CRGB::Black; FastLED.show(); delay(50);
    leds[66] = CRGB::Black; FastLED.show(); delay(50);
    leds[67] = CRGB::Black; FastLED.show(); delay(50);
    leds[68] = CRGB::Black; FastLED.show(); delay(50);
    leds[69] = CRGB::Black; FastLED.show(); delay(50);
    leds[70] = CRGB::Black; FastLED.show(); delay(50);
  }

}
