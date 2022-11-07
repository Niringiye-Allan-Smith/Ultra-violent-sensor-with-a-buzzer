void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(6)==HIGH) {
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);
    digitalWrite(6,LOW);
    delay(500);
    digitalWrite(4,LOW);
    delay(500);

  }else{
    digitalWrite(10,LOW);
    delay(500);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(9,HIGH);
    delay(500);

  }
  

}


