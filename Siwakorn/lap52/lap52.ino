int adc = 36;
int pwm = 13;

void setup() {
   Serial.begin(9600);
}

void loop() {
  
  //  Serial.println(" stang888");
  //   Serial.println("");
  //   delay(200);
    // Serial.println(analogRead(adc));
    // analogWrite(pwm,250);
    
    // delay(500);
    // Serial.println("-OO-OO-OO-OO--O-O");
 int LDR = analogRead(adc);
 Serial.println(LDR);
 int val = map(LDR,0,1023,800,0);
 analogWrite(pwm,val);
 delay(50);

 
 

}
