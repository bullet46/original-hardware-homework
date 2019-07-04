void setup() {
  Serial.begin(9600);
}

void loop() {
  char number_c;
  int number;
  if (Serial.available()>0)
  {
    number_c = char(Serial.read());
    number = number_c ;
  }

}
