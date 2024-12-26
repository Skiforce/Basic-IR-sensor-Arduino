const int pinIRd = 8;
const int pinLED = 13; 

int IRvalueD = LOW;


void setup() {
  Serial.begin(9600);
  pinMode(pinIRd, INPUT);
  pinMode(pinLED, OUTPUT);


}

void loop() {
  Serial.print("\t Digital Reading=");
  Serial.println(IRvalueD);

  if (IRvalueD == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);

  }
  
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(50);

  IRvalueD = digitalRead(pinIRd);

  
}
