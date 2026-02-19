int ledPin[7]={0,1,2,3,4,5,6}; 
int chu_I[7]={HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH};
int chu_U[7]={HIGH,LOW,LOW,LOW,LOW,LOW,HIGH};
int chu_H[7]={LOW,LOW,LOW,HIGH,LOW,LOW,HIGH};
void setup() {
for(int i=0;i<7;i++)
pinMode(ledPin[i], OUTPUT);}
void loop() {
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], chu_I[i]);}
delay(400);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(400);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], chu_U[i]);}
delay(400);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(400);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], chu_H[i]);}
delay(400);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(400);
}
