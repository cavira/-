#include "Morse.h"
char x;
Morse morse(13);
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  if(Serial.available()>0)
    {
      x = char(Serial.read());
    
    
  switch(x)
  {
    case 'a':
    case 'A':morse.dot();morse.dash();break;
    case 'b':
    case 'B':morse.dash();morse.dot();morse.dot();morse.dot();break;
    case 'c':
    case 'C':morse.dash();morse.dot();morse.dash();morse.dot();break;
    case 'd':
    case 'D':morse.dash();morse.dot();morse.dot();break;
    case 'e':
    case 'E':morse.dot();break;
    case 'f':
    case 'F':morse.dot();morse.dot();morse.dash();morse.dot();break;
    case 'g':
    case 'G':morse.dash();morse.dash();morse.dot();break;
    case 'h':
    case 'H':morse.dot();morse.dot();morse.dot();morse.dot();break;
    case 'i':
    case 'I':morse.dot();morse.dot();break;
    case 'j':
    case 'J':morse.dot();morse.dash();morse.dash();morse.dash();break;
    case 'k':
    case 'K':morse.dash();morse.dot();morse.dash();break;
    case 'l':
    case 'L':morse.dot();morse.dash();morse.dot();morse.dot();break;
    case 'm':
    case 'M':morse.dash();morse.dash();break;
    case 'n':
    case 'N':morse.dash();morse.dot();break;
    case 'o':
    case 'O':morse.dash();morse.dash();morse.dash();break;
    case 'p':
    case 'P':morse.dot();morse.dash();morse.dash();morse.dot();break;
    case 'q':
    case 'Q':morse.dash();morse.dash();morse.dot();morse.dash();break;
    case 'r':
    case 'R':morse.dot();morse.dash();morse.dot();break;
    case 's':
    case 'S':morse.dot();morse.dash();morse.dot();break;
    case 't':
    case 'T':morse.dash();break;
    case 'u':
    case 'U':morse.dot();morse.dot();morse.dash();break;
    case 'v':
    case 'V':morse.dot();morse.dot();morse.dot();morse.dash();break;
    case 'w':
    case 'W':morse.dot();morse.dash();morse.dash();break;
    case 'x':
    case 'X':morse.dash();morse.dot();morse.dot();morse.dash();break;
    case 'y':
    case 'Y':morse.dash();morse.dot();morse.dash();morse.dash();break;
    case 'z':
    case 'Z':morse.dash();morse.dash();morse.dot();morse.dot();break;
    case ' ':break;
    case '\n':break;
  }
    }
}
