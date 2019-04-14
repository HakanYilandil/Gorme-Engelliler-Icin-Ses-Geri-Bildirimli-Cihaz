const int trigger_pin = 7;
const int echo_pin = 6;
const int buzzer = 8;
int sure ;
int mesafe ;
  
void setup() {

pinMode(buzzer , OUTPUT);
pinMode(trigger_pin , OUTPUT);
pinMode(echo_pin ,INPUT);
Serial.begin(9600);
  
}
  
void loop()
{
digitalWrite(trigger_pin , HIGH);
delayMicroseconds(1000);
digitalWrite(trigger_pin , LOW);
sure = pulseIn(echo_pin , HIGH);
mesafe = (sure/2) / 29.1;
  
if (mesafe <= 10)
{
digitalWrite(buzzer , HIGH);
delay(250);
digitalWrite(buzzer , LOW);
}
else if (mesafe <=25)
{
digitalWrite(buzzer , HIGH);
delay(500);
digitalWrite(buzzer , LOW);
}
else if ( mesafe <=50)
{
digitalWrite(buzzer , HIGH);
delay(750);
digitalWrite(buzzer , LOW);
}
else
{
  }
}
