int counter;

void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(10, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}