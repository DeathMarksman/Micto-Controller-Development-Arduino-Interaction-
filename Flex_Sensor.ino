void setup()
{
  Serial.begin(9600);
}


void loop()
{
  int i = analogRead(A0);

  float v = i * (5.0/1023.0);
  Serial.println(v);
}

