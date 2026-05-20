void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(2);

  if(button == LOW){
    tone(8,800);
  }
  else{
    noTone(8);
  }
  
}
