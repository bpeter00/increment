

 int sw=4;
  int outputclk=2;
  int outputdt=3;
  int most=1;
  int ezelott=1;
  int szamlalo=0;
void setup() {
 Serial.begin (9600);
Serial.println("encoder kezelő program");
for(int i=2;i<=4;i++) pinMode(i, INPUT_PULLUP);
}

void loop() {

most=digitalRead(outputclk);
if (most != ezelott)
{
 //Serial.println("teker"); 
 if(digitalRead(outputdt)!= most)
 {
  szamlalo--;
  }
  else
  {
  szamlalo++;  
  }
Serial.println(szamlalo);
  
}
ezelott=most;

 
}
