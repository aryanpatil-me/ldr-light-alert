// Variables
int LDRPin = A0;
int greenPin = D7;
int redPin = D6;
int buzzPin = D5;
int LDRVal;
int thresholdVal = 150;
int delayTime = 250;
int waitT = 100;

void setup() {
  // Setting pinMode for Pins:
  pinMode(LDRPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  // Starting serial monitor at 9600 broad rate:
  Serial.begin(9600);
}

void loop() {
  // reading LDR values using analogRead.
  LDRVal = analogRead(LDRPin);
  //printing values to get threshold value.
  Serial.println(LDRVal);
  delay(delayTime);

  // setting condition for surrounding lights on/off.
  // for onlight green LED glows and no buzzer sound.
  // for offlight red LED glows and buzzer start buzzing.
  if (LDRVal < thresholdVal) {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(buzzPin, HIGH);
    delay(waitT);
    digitalWrite(buzzPin, LOW);
    delay(waitT);

  } else {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(buzzPin, LOW);
  }
}
