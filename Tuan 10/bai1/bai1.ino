int ledPin[]={0,1,2,3,4,5,6,7}; 
void setup() {
  for(int i=0; i<8;i++){ 
pinMode(ledPin[i], OUTPUT);}}
void loop() {
  for(int i=0; i<8;i++){
digitalWrite(ledPin[i], HIGH);}
delay(500); 
for (int i=0; i<8; i++){
digitalWrite(ledPin[i], LOW);} 
delay(500); } 
