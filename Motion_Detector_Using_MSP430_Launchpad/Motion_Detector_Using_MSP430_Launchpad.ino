void setup()

{

  pinMode(8, INPUT);

  pinMode(6, OUTPUT);

}

void loop()

{

  if(digitalRead(8) == HIGH)

  {

    digitalWrite(6, HIGH);

    delay(100);

    digitalWrite(6, LOW);

    delay(100);

  }
