void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);//3265分别对应CD4511输入的高位到低位
  Serial.begin(9600);
}
  int income;
void loop()
{ 

  if(Serial.available()>=0)
  {
   income=Serial.read(); 
  }
        switch(income)
        {
          case '0':
              zero();
              break;
          case '1':
              one();
              break;
          case '2':
              two();
              break;
          case '3':
              three();
              break;
          case '4':
              four();
              break;
          case '5':
              five();
              break;
          case '6':
              six();
              break;
          case '7':
              seven();
              break;
          case '8':
              eight();
              break;
          case '9':
              nine();
              break;
          default:
              break;
        }


}

void zero()
{
  delay(10);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void one()
{
  delay(10);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void two()
{
  delay(10);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void three()
{
  delay(10);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void four()
{
  delay(10);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void five()
{
  delay(10);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void six()
{
  delay(10);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void seven()
{
  delay(10);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}
void eight()
{
  delay(10);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
}
void nine()
{
  delay(10);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
}
