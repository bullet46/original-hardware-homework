void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

int counter = 6;
int n;

void loop()
{
  if (Serial.available() > 0)
  {
    int i, number;
    number = Serial.read() - '0';
    if  (counter == 10)
    {
      for (i =  6; i < 10; i++) digitalWrite(i, LOW);
      counter = 6;
    }
    for (i = 2; i <= 5; i++)
    {
      if (number % 2 == 1)
      {
        digitalWrite(i, HIGH);
      } else {
        digitalWrite(i, LOW);
      }
      number = number / 2;
    }
    digitalWrite(counter, HIGH);
    counter ++;
  }
}