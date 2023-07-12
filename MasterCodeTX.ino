#define Door1 0x21
#define Door2 0x22
#define Door3 0x23
#define Door4 0x24

void setup() {
  // put your setup code here, to run once:
     Serial.begin(4800);
     UnlockDoor1();
}
void SyncBreak(){
   int i;
  for(i=0;i<13;i++){
    Serial.print(0);
    Serial.write(0);
  }
  Serial.print(1);
  Serial.write(1);
}
void SyncFeild(){
  int syncfeild = 0x55;
  Serial.print(syncfeild);
  Serial.write(syncfeild);
}
void ID(int id){
  Serial.print(id);
  Serial.write(id);
}
void UnlockDoor1(){
  //SyncBreak();
  //SyncFeild();
  ID(Door1);
}
void UnlockDoor2(){
  //SyncBreak();
  //SyncFeild();
  ID(Door2);
}
void UnlockDoor3(){
  SyncBreak();
  SyncFeild();
  ID(Door3);
}
void UnlockDoor4(){
  SyncBreak();
  SyncFeild();
  ID(Door4);
}

void loop() {
  // put your main code here, to run repeatedly:
  UnlockDoor1();
  delay(1000);
  Serial.println("");
}
