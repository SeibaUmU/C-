int ledPin[7]={0,1,2,3,4,5,6}; 
int so_0[7]={HIGH,LOW,LOW,LOW,LOW,LOW,LOW};
int so_1[7]={HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH};
int so_2[7]={LOW,HIGH,LOW,LOW,HIGH,LOW,LOW};
int so_3[7]={0,1,1,0,0,0,0};
int so_4[7]={0,0,1,1,0,0,1};
int so_5[7]={0,0,1,0,0,1,0};
int so_6[7]={0,0,0,0,0,1,0};
int so_7[7]={1,1,1,1,0,0,0};
int so_8[7]={0,0,0,0,0,0,0};
int so_9[7]={0,0,1,0,0,0,0};
void setup() {
for(int i=0;i<7;i++)
pinMode(ledPin[i], OUTPUT);}
void loop() {
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_0[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_1[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_2[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_3[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_4[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_5[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_6[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_7[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_8[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], so_9[i]);}
delay(300);
for(int i=0;i<7;i++){
digitalWrite(ledPin[i], HIGH);}
delay(300);
}
