void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int pv = analogRead(A0);
  int mappedVal = map(pv,0,1023,0,255);
  Serial.println(pv);
  Serial.println("----");
  Serial.print(mappedVal);
  analogWrite(11,mappedVal);
  delay(20);
}

