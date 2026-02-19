int ledPin[]={0,1,2,3,4,5,6,7}; 
void setup() {
  for(int i=0; i<8;i++){ 
pinMode(ledPin[i], OUTPUT);}}
void loop() {
  for(int i=0; i<8;i+=2){//le
digitalWrite(ledPin[i], HIGH);}
delay(400); //tạo trễ 1s
for (int i=0; i<8; i+=2){
digitalWrite(ledPin[i], LOW);} 
delay(400);  //tạo trễ 1s
  for(int i=1; i<8;i+=2){//chan
digitalWrite(ledPin[i], HIGH);}
delay(400); //tạo trễ 1s
for (int i=1; i<8; i+=2){
digitalWrite(ledPin[i], LOW);} 
delay(400); } //tạo trễ 1s
