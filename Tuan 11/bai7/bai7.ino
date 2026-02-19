int ledpin[]={0,1,2,3,4,5,6,7};
int SW1=LOW;
int SW2=LOW;
int SW3=LOW;
const int buttonPin1 = 8;
const int buttonPin2 = 9;
const int buttonPin3 = 10;
void setup() {
  for (int i=0;i<8;i++){
    pinMode(ledpin[i],OUTPUT);
    }
    pinMode(buttonPin1,INPUT);
    pinMode(buttonPin2,INPUT);
    pinMode(buttonPin3,INPUT);
  }
void choptat(){
  for (int i=0;i<4;i++){
 for(int i=0;i<8;i++){
  digitalWrite(ledpin[i],HIGH);}
  delay(400);
  for (int i=0;i<8;i++){
  digitalWrite(ledpin[i],0);}
  delay(400);}
 }
void sangtatdan(){
  for (int i=0;i<8;i++){
    digitalWrite(ledpin[7-i],1);
    delay(400);}
   for (int i=0;i<8;i++){
    digitalWrite(ledpin[7-i],0);
    delay(400);}
     for (int i=0;i<8;i++){
    digitalWrite(ledpin[7-i],1);
    delay(400);}
   for (int i=0;i<8;i++){
    digitalWrite(ledpin[7-i],0);
    delay(400);}
}
void loop() {
  SW1=digitalRead(buttonPin1);
  if (digitalRead(buttonPin1) == 1)
 choptat();
  SW2=digitalRead(buttonPin2);
 if  (digitalRead(buttonPin2) ==1){
  sangtatdan();
   }
SW3=digitalRead(buttonPin3);
 if  (digitalRead(buttonPin3) ==1){
  for (int i=0;i<8;i++){
  digitalWrite(ledpin[i],1);
 }
  }}
 
 
 
  
