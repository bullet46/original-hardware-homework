void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);//从2号引脚开始，因为1引脚为串口引脚，容易出现错误
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    int i, number;
    number = Serial.read()-'0';
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
    }
  }

