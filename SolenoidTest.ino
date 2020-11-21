const int delayS = 1000;
const int delayL = 500;
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
    delay(delayS);
    digitalWrite(lockPin, LOW);
    delay(delayS);
}

void testSolenoid(int lockPin, int red, int green) {
    if (lockPin != HIGH) {
        digitalWrite(red, HIGH);
        delay(delayL);
        digitalWrite(red, LOW);
        delay(delayL);
    }

    if (lockPin = HIGH) {
        digitalWrite(green, HIGH);
        delay(delayL);
        digitalWrite(green, LOW);
        delay(delayL);
    }
}