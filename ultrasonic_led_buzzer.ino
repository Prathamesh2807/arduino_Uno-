void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  long duration ;
  int distant ;

  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  duration = pulseIn(3,HIGH);

  distant = duration * 0.034/2 ;
  Serial.println("distance : ");
  Serial.println(distant);

  if (distant <= 10){
    digitalWrite(8,HIGH);
    tone(9,1000);
  }
  else {
    digitalWrite(8,LOW);
    noTone(9);
  }
  


}
