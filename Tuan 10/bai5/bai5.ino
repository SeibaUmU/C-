int ledPin[]={0,1,2,3,4,5,6,7}; 
void setup() {
  for(int i=0; i<8;i++){ 
pinMode(ledPin[i], OUTPUT);}}
void loop() {
  for(int i=0; i<8;i++){
digitalWrite(ledPin[i], LOW);}
for (int i=0, j=7; i<4, j>3; i++, j--){
digitalWrite(ledPin[i], HIGH);
digitalWrite(ledPin[j], HIGH);
delay(300);
digitalWrite(ledPin[i], LOW);
digitalWrite(ledPin[j], LOW);
}
for(int i=0; i<8;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300); }
