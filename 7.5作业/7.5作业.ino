#define _time 1000
char x;
void setup() 
{
    pinMode(8, OUTPUT);
    Serial.begin(9600);
}


void loop()
{
if(Serial.available()>0)
    {
      x = Serial.read();
    

  switch(x)
  {
    case 'a':
    case 'A':Morse_dot();Morse_dash();break;
    case 'b':
    case 'B':Morse_dash();Morse_dot();Morse_dot();Morse_dot();break;
    case 'c':
    case 'C':Morse_dash();Morse_dot();Morse_dash();Morse_dot();break;
    case 'd':
    case 'D':Morse_dash();Morse_dot();Morse_dot();break;
    case 'e':
    case 'E':Morse_dot();break;
    case 'f':
    case 'F':Morse_dot();Morse_dot();Morse_dash();Morse_dot();break;
    case 'g':
    case 'G':Morse_dash();Morse_dash();Morse_dot();break;
    case 'h':
    case 'H':Morse_dot();Morse_dot();Morse_dot();Morse_dot();break;
    case 'i':
    case 'I':Morse_dot();Morse_dot();break;
    case 'j':
    case 'J':Morse_dot();Morse_dash();Morse_dash();Morse_dash();break;
    case 'k':
    case 'K':Morse_dash();Morse_dot();Morse_dash();break;
    case 'l':
    case 'L':Morse_dot();Morse_dash();Morse_dot();Morse_dot();break;
    case 'm':
    case 'M':Morse_dash();Morse_dash();break;
    case 'n':
    case 'N':Morse_dash();Morse_dot();break;
    case 'o':
    case 'O':Morse_dash();Morse_dash();Morse_dash();break;
    case 'p':
    case 'P':Morse_dot();Morse_dash();Morse_dash();Morse_dot();break;
    case 'q':
    case 'Q':Morse_dash();Morse_dash();Morse_dot();Morse_dash();break;
    case 'r':
    case 'R':Morse_dot();Morse_dash();Morse_dot();break;
    case 's':
    case 'S':Morse_dot();Morse_dash();Morse_dot();break;
    case 't':
    case 'T':Morse_dash();break;
    case 'u':
    case 'U':Morse_dot();Morse_dot();Morse_dash();break;
    case 'v':
    case 'V':Morse_dot();Morse_dot();Morse_dot();Morse_dash();break;
    case 'w':
    case 'W':Morse_dot();Morse_dash();Morse_dash();break;
    case 'x':
    case 'X':Morse_dash();Morse_dot();Morse_dot();Morse_dash();break;
    case 'y':
    case 'Y':Morse_dash();Morse_dot();Morse_dash();Morse_dash();break;
    case 'z':
    case 'Z':Morse_dash();Morse_dash();Morse_dot();Morse_dot();break;
    case ' ':delay(2000); break;//单词之间空2000ms

  };
}

}

void Morse_dot()
{
  digitalWrite(8,HIGH);
  delay(_time);
  digitalWrite(8,LOW);
  delay(_time);
}

void Morse_dash()
{
  digitalWrite(8,HIGH);
  delay(_time*4);
  digitalWrite(8,LOW);
  delay(_time);
}