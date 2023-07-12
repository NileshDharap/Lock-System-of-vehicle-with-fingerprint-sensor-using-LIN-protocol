#define Door1 0x21
#define Door2 0x22
#define Door3 0x23
#define Door4 0x24

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(D4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   int static Header;
   if(Serial.available()>0){
      Header = Serial.read();
      Serial.println(Header);
   }
   Serial.println(Header);
   if (Header==Door3 || Header==Door4){
   digitalWrite(D4,HIGH);
  }
  else{
    digitalWrite(D4,LOW);
  }
}
