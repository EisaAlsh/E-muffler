int throttlePin = A0; // Analog pin connected to throttle position sensor
int throttleValue = 0;

void setup() {
  Serial.begin(115200); // Initialize serial communication for monitoring
}

void loop() {
  throttleValue = analogRead(throttlePin); // Read the throttle position
  Serial.print("Throttle Position: ");
  Serial.println(throttleValue); // Print the throttle value to the Serial Monitor
  delay(100); // Short delay for readability
}
