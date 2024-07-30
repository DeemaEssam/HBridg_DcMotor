
// declare variables
const int forwardPin = 8; 
const int backwardPin = 18; 
const int delayTime = 1000;

void setup() {
	pinMode(forwardPin, OUTPUT); 
	pinMode(backwardPin, OUTPUT);
}

void loop() {
  // stop
  digitalWrite(forwardPin, LOW); 
  digitalWrite(backwardPin, LOW); 
  delay(delayTime);
  // spin forward
  digitalWrite(forwardPin, HIGH); 
  digitalWrite(backwardPin, LOW); 
  delay(delayTime);
  // stop
  digitalWrite(forwardPin, HIGH); 
  digitalWrite (backwardPin, HIGH); 
  delay(delayTime);
  // spin backward
  digitalWrite(forwardPin, LOW); 
  digitalWrite(backwardPin, HIGH); 
  delay(delayTime);
}
