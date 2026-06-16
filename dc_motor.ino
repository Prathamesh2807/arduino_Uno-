void setup()
{
  pinMode(8, OUTPUT);   // IN1
  pinMode(9, OUTPUT);   // IN2
  pinMode(10, OUTPUT);  // ENABLE
}

void loop()
{
  digitalWrite(10, HIGH); // Enable motor driver

  // Clockwise rotation
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

}