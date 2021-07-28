int pin = 9;

void setup()
{
  for(int i = 2; i <= 8; i++)
    pinMode(i, INPUT);
  pinMode(pin, OUTPUT);
}

void loop()
{
  if(digitalRead(2) == HIGH)
    tone(pin, 240, 100);
  else if(digitalRead(3) == HIGH)
    tone(pin, 270, 100);
  else if(digitalRead(4) == HIGH)
    tone(pin, 300, 100);
  else if(digitalRead(5) == HIGH)
    tone(pin, 320, 100);
  else if(digitalRead(6) == HIGH)
    tone(pin, 360, 100);
  else if(digitalRead(7) == HIGH)
    tone(pin, 400, 100);
  else if(digitalRead(8) == HIGH)
    tone(pin, 450, 100);
  else
    noTone(pin);
  delay(10);
}
