int wifi = 2;
int bt = 17;
int ntp = 15;
int iot = 12;

void setup() {
  pinMode(wifi,OUTPUT);
  pinMode(bt,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(iot,OUTPUT);
}

void loop() {

  digitalWrite(bt,HIGH);
  delay(200);
   digitalWrite(bt,LOW);
  delay(200);
  digitalWrite(wifi,HIGH);
  delay(200);
   digitalWrite(wifi,LOW);
  delay(200);
  digitalWrite(ntp,HIGH);
  delay(200);
   digitalWrite(ntp,LOW);
  delay(200);
  digitalWrite(iot,HIGH);
  delay(200);
  digitalWrite(iot,LOW);
  delay(200);
  ///////////////////
  digitalWrite(ntp,HIGH);
  delay(200);
   digitalWrite(ntp,LOW);
  delay(200);
  digitalWrite(wifi,HIGH);
  delay(200);
   digitalWrite(wifi,LOW);
  delay(200);
  // digitalWrite(bt,HIGH);
  // delay(70);
  //  digitalWrite(bt,LOW);
  // delay(70);

}
