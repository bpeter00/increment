

 int sw=4;
  int outputclk=2;
  int outputdt=3;
  int most=1;
  int ezelott=1;
  int szamlalo=0;
  int led=5;
  byte fenyero=0;
void setup() {
 Serial.begin (9600);
Serial.println("encoder kezelő program");
for(int i=2;i<=4;i++) pinMode(i, INPUT_PULLUP);

pinMode(led,OUTPUT);
digitalWrite(led,1);
}

void loop() {

most=digitalRead(outputclk);
if (most != ezelott)
{
 //Serial.println("teker"); 
 if(digitalRead(outputdt)!= most)
 {
  szamlalo=szamlalo-5;
  }
  else
  {
  szamlalo=szamlalo+5;  
  }

  szamlalo=constrain(szamlalo,0,100);
Serial.println(szamlalo);
  
}
ezelott=most;
fenyero=map(szamlalo,0,100,0,255);
analogWrite(led, fenyero);
if (digitalRead(sw)==0)
{
  delay(100);
  if (digitalRead(sw)==0){
  Serial.println(szamlalo);
  szamlalo=50;
  }
  }

 
}
