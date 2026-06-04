void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(2) ;

  Serial.println("IR Value : ");
  Serial.println(value);

  if (value == 0){
    digitalWrite(8,HIGH);
    tone(9,1000);
  }
  else{
    digitalWrite(8,LOW);
    noTone(9);
  }


}
