int o1=9,o2=8,o3=7,o4=6;
void setup() 
{
  Serial.begin(9600);
  pinMode(o1,OUTPUT);
  pinMode(o2,OUTPUT);
  pinMode(o3,OUTPUT);
  pinMode(o4,OUTPUT);
}
void stop() 
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,LOW);
  digitalWrite(o3,LOW);
  digitalWrite(o4,LOW);
}
void forward()
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,HIGH);
  digitalWrite(o3,LOW);
  digitalWrite(o4,HIGH);
}
void back()
{
  digitalWrite(o1,HIGH);
  digitalWrite(o2,LOW);
  digitalWrite(o3,HIGH);
  digitalWrite(o4,LOW);
}
void right()
{
  digitalWrite(o1,HIGH);
  digitalWrite(o2,LOW);
  digitalWrite(o3,LOW);
  digitalWrite(o4,HIGH);
}
void left()
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,HIGH);
  digitalWrite(o3,HIGH);
  digitalWrite(o4,LOW);
}
void sfright()
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,LOW);
  digitalWrite(o3,LOW);
  digitalWrite(o4,HIGH);
}
void sfleft()
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,LOW);
  digitalWrite(o3,HIGH);
  digitalWrite(o4,LOW);
}
void sbright()
{
  digitalWrite(o1,HIGH);
  digitalWrite(o2,LOW);
  digitalWrite(o3,LOW);
  digitalWrite(o4,LOW);
}
void sbleft()
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,HIGH);
  digitalWrite(o3,LOW);
  digitalWrite(o4,LOW);
}
void loop()
{
  if(Serial.available()>0)
  {
    char state=Serial.read();
    switch (state)
    {
      case 'F':
      forward();
      break;
      case 'B':
      back();
      break;
      case 'R':
      right();
      break;
      case 'L':
      left();
      break;
      case 'S':
      stop();
      break;
      case 'G':
      sfleft();
      break;
      case 'I':
      sfright();
      break;
      case 'H':
      sbleft();
      break;
      case 'J':
      sbright();
      break;
      default: break;        
    }
  }\
}
