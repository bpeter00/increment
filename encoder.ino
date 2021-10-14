

 int sw=2;
  int outputclk=4;
  int outputdt=3;
void setup() {
 Serial.begin (9600);
Serial.println("encoder kezelő program");
for(int i=2;i<=4;i++) pinMode(i, INPUT_PULLUP);
}

void loop() {
  for(int i=2;i<=4;i++){
  Serial.print(digitalRead(i));
  Serial.print("; ");
  }
  Serial.println("");
}
