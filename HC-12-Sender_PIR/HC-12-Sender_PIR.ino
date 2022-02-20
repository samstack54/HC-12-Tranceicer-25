// HC-12 Sender

 byte PIR = 8 ;
 byte LED = 5 ; 
 
 void setup() {
  pinMode(LED, OUTPUT) ;
  pinMode(PIR, INPUT) ;
  Serial.begin(9600);
 }

 void loop() {
  int V_PIR = digitalRead(PIR) ;

  if (V_PIR == 1) {
  Serial.print('o');
  digitalWrite(LED, HIGH) ;
  delay(200);
  }

  if (V_PIR == 0 ) {
  Serial.print('f');
  digitalWrite(LED, LOW) ;  
  delay(200);
  } 
 }
