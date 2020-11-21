const int delayTime = 1000;
int solenoidPin = 9;
int greenLedPin = 10;
int redLedPin = 11;

void setup() {
    pinMode(solenoidPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(redLedPin, OUTPUT);
}

void loop() {
    lockSolenoid(solenoidPin);
    testSolenoid(solenoidPin, redLedPin, greenLedPin);
}

void lockSolenoid(int lockPin) {
    digitalWrite(lockPin, HIGH);
    delay(delayTime);
    digitalWrite(lockPin, LOW);
    delay(delayTime);
}

void testSolenoid(int lockPin, int red, int green) {
    if (digitalRead(lockPin) != HIGH) {
        digitalWrite(red, HIGH);
        delay(delayTime);
        digitalWrite(red, LOW);
        delay(delayTime);
    }

    if (digitalRead(lockPin) == HIGH) {
        digitalWrite(green, HIGH);
        delay(delayTime);
        digitalWrite(green, LOW);
        delay(delayTime);
    }
}