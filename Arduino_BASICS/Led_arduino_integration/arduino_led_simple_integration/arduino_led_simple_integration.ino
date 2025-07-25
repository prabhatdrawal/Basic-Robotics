const int Led_pin = 8;

void setup()
{
  pinMode(Led_pin,OUTPUT);
}
void loop(){
  pinMode(Led_pin,HIGH);
  delay(1000);
  pinMode(Led_pin,LOW);
  delay(1000);
}