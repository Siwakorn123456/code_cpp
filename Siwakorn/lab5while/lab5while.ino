int led[]={17,2,15,12};

void setup() {
 pinMode(led[0],OUTPUT);
  pinMode(led[1],OUTPUT);
  pinMode(led[2],OUTPUT);
  pinMode(led[3],OUTPUT);
}
  void loop() {
    int i = 0;
    while(i < 4){
  digitalWrite(led[i],LOW);
  delay(70);
  digitalWrite(led[i],HIGH);
  delay(70);
  i++;
  
 
    int i = 4;
    while(i < 0){
  digitalWrite(led[i],LOW);
  delay(70);
  digitalWrite(led[i],HIGH);
  delay(70);
  i++;
  }
  
  }

  }
