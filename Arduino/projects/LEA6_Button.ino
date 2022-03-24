/*

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// CONSTANTS --> won't change and are used to set pin numbers //

const int buttonPin = 2;     // pin number for the pushbutton
const int ledPin =  13;      // pin numbers for the LED.

// VARIABLES --> will change. //

int buttonState = 0;         // variable pushbutton status. 0 is the default state of the button (Low = 0 = Off)

// SETUP //

void setup() {
  pinMode(ledPin, OUTPUT);        // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT);      // initialize the pushbutton pin as an input:
}

// LOOP //

void loop() {
  buttonState = digitalRead(buttonPin);     // Reads that state of the button attached to pin 2 and attributes that state to the variable buttonState
  
  if (buttonState == HIGH) {                // If pressed, the button state at pin 2 is HIGH = 1 = On...
    digitalWrite(ledPin, HIGH);             // ... then LED at pin 13 is also High = 1 = On
    } 
  else {
    digitalWrite(ledPin, LOW);              // Else the button state at pin 2 is not pressed, so pin 13 is Low = 0 = Off.
    }
}
