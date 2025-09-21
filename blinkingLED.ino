// Define the GPIO pin number connected to the LED
#define LED_PIN 11

void setup() {
  // Set the LED pin as an OUTPUT so we can turn it on/off
  pinMode(LED_PIN, OUTPUT);

  // Start the Serial Monitor for debugging
  Serial.begin(115200);
}

void loop() {
  // Turn the LED ON by setting the pin HIGH (voltage on)
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Wait for 1 second (1000 milliseconds)
  Serial.println("HIGH"); // Print status to the Serial Monitor

  // Turn the LED OFF by setting the pin LOW (voltage off)
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Wait for 1 second
  Serial.println("LOW"); // Print status to the Serial Monitor
}
