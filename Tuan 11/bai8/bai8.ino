int ledPin[7]={0,1,2,3,4,5,6}; 
int chu_A[7]={LOW,LOW,LOW,HIGH,LOW,LOW,LOW};
void setup() {
for(int i=0;i<7;i++)
pinMode(ledPin[i], OUTPUT);}
void loop() {
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], chu_A[i]);}
delay(500);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(500);
}
