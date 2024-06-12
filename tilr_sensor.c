/*
    Project name : Tilt Sensor
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-tilt-sensor
*/

// Tilt Sensor
const int tiltPin = 2; // Digital pin connected to the tilt sensor

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set tilt pin as input
  pinMode(tiltPin, INPUT);
}

void loop() {
  // Read the state of the tilt sensor
  int tiltState = digitalRead(tiltPin);

  // Print the state to the Serial Monitor
  if (tiltState == HIGH) {
    Serial.println("Tilt detected!"); // Tilt detected
  } else {
    Serial.println("No tilt detected."); // No tilt detected
  }

  // Delay for a short interval
  delay(500); // Adjust delay as needed
}
