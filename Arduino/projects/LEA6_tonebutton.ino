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

// -- CONSTANTS: Don't change -- //
const int buttonPin = 2;     // pin number for the pushbutton
const int buttonPin2 = 3;    // pin number for the 2nd pushbutton
const int buttonPin3 = 4;    // pin number for the 3rd pushbutton
const int ledPin =  13;      // pin numbers for the LED
const int speakerPin = 11;   // pin number for speaker

// -- VARIABLES: Do change -- //
int buttonState = 0;         // variable pushbutton status. 0 is the default state of the button (Low = 0 = Off)
int buttonState2 = 0;
int buttonState3 = 0;

// -- SETUP -- //
void setup() {
  pinMode(buttonPin, INPUT);      // initialize 1st pushbutton pin as an input
  pinMode(buttonPin2, INPUT);     // initialize 2nd pushbutton as an input
  pinMode(buttonPin3, INPUT);     // initialize 3rd pushbutton as an input
  pinMode(ledPin, OUTPUT);        // initialize LED pin as an output
  pinMode(speakerPin, OUTPUT);    // initialize speaker pin as an output
}

// -- LOOP -- //
void loop() {
  buttonState = digitalRead(buttonPin);     // Reads that state of the button attached to pin 2 and attributes that state to the variable buttonState
  buttonState2 = digitalRead(buttonPin2);   // Reads that state of the button attached to pin 3 and attributes that state to the variable buttonState
  buttonState3 = digitalRead(buttonPin3);   // Reads that state of the button attached to pin 4 and attributes that state to the variable buttonState
  
  if (buttonState == HIGH) {                // If button 1 pressed, the button state at pin 2 is HIGH = 1 = On...
    digitalWrite(ledPin, HIGH);             // ... then LED at pin 13 is also High = 1 = On
    tone(speakerPin, 330);                  // ... then speaker at pin 11 emits a tone (Hz)
    } 
  else if (buttonState2 == HIGH) {          // else if tests for the second condition. If button 2 pressed, the button state at pin 3 is HIGH = 1 = On...
    digitalWrite(ledPin, HIGH);             // ... then LED at pin 13 is also High = 1 = On
    tone(speakerPin, 294);                  // ... then speaker at pin 11 emits a tone (Hz)
    } 
  else if (buttonState3 == HIGH) {          // else if tests for the second condition. If button 3 pressed, the button state at pin 4 is HIGH = 1 = On...
    digitalWrite(ledPin, HIGH);             // ... then LED at pin 13 is also High = 1 = On
    tone(speakerPin, 262);                  // ... then speaker at pin 11 emits a tone (Hz)
    } 
  else {
    digitalWrite(ledPin, LOW);              // Else the button state at pin 2 and 3 is not pressed, so pin 13 is Low = 0 = Off.
    noTone(speakerPin);                     //.... and speaker makes not sound
    }
}
