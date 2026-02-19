int ledPin[] = {0,1,2,3,4,5,6,7};
int currentLED=0;
void setup() {
for (int x=0; x<8; x++) {
pinMode(ledPin[x], OUTPUT);
}
}
void loop() {
for (int x=0; x<8; x++) { 
digitalWrite(ledPin[x], LOW);
}
digitalWrite(ledPin[currentLED], HIGH); 
currentLED += 1;
if (currentLED == 8) 
currentLED =0;
delay(300);} 
