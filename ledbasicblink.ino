// Pin where the LED is connected
int ledPin = 13; // On most Arduino boards, the built-in LED is on pin 13

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  
  // Wait for a second (1000 milliseconds)
  delay(1000);
  
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  
  // Wait for another second
  delay(1000);
}
