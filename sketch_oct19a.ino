// Define pin numbers
const int switchPin = 13;    // Pin for the switch
const int ledPin = 12;      // Pin for the LED
int switchState = 0;        // Variable for reading the switch status

void setup() {
  // Set up the LED pin as output
  pinMode(ledPin, OUTPUT);

  // Set up the switch pin as input
  pinMode(switchPin, INPUT);
}

void loop() {
  // Read the state of the switch
  switchState = digitalRead(switchPin);

  // Check if the switch is pressed
  if (switchState == HIGH) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
  }
}
