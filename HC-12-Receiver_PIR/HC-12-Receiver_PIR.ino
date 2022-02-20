// HC-12 Receiver

 byte LED = 9 ;
 byte Piezo = 8;
 
 void setup() {
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    pinMode(Piezo, OUTPUT);    
 }

 void loop() {
    if(Serial.available() > 0)
    {
     char c = Serial.read() ;
     Serial.println(c) ;
       if(c == 'o')
       {
         digitalWrite(LED, HIGH);
         digitalWrite(Piezo, HIGH); 
         delay(200) ;           
        }
        else if (c == 'f' )
        {
          digitalWrite(LED, LOW);
          delay(200) ;                        
        }             
     }
 }
