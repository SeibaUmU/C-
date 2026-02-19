int ledPin[]={0,1,2,3,4,5,6,7};
int SW1=LOW;
int SW2=LOW;
int SW3=LOW;
int direction = 1;
int currentLED = 0;
const int buttonPin1 = 8;
const int buttonPin2 = 9;
const int buttonPin3 = 10;
void setup() {
  for (int i=0;i<8;i++){
    pinMode(ledPin[i],OUTPUT);
    }
    pinMode(buttonPin1,INPUT);
    pinMode(buttonPin2,INPUT);
    pinMode(buttonPin3,INPUT);
  }
 void choptat(){
  for (int i=0;i<3;i++){
 for(int i=0;i<8;i++){
  digitalWrite(ledPin[i],HIGH);}
  delay(300);
  for (int i=0;i<8;i++){
  digitalWrite(ledPin[i],LOW);}
  delay(300);}
 }
void hai_vong(){
  for(int y=0;y<29;y++){
  for (int i=0; i<8; i++) { 
digitalWrite(ledPin[i], LOW);
}
digitalWrite(ledPin[currentLED], HIGH); 
currentLED += direction;
if (currentLED == 7) 
direction = -1;
if (currentLED == 0) 
direction = 1;
delay(300); }
}
void loop() {
  SW1=digitalRead(buttonPin1);
  if (digitalRead(buttonPin1) == 1)
 choptat();
  SW2=digitalRead(buttonPin2);
 if  (digitalRead(buttonPin2) ==1){
  hai_vong();
 }
 SW3=digitalRead(buttonPin3);
 if (digitalRead(buttonPin3) ==1){
   for (int i=0;i<8;i++){
  digitalWrite(ledPin[i],1);
 }
 }
}
