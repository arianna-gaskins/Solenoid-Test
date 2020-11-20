int solenoidPin = 9;
int greenLedPin = 10;
int redLedPin = 11;
int delayTime = 1000;

void setup(){
    pinMode(solenoidPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(redLedPin, OUTPUT);
}

void loop(){

}

void lockSolenoid(int lockPin){
    digitalWrite(lockPin, HIGH);
    delay(delayTime);
    digitalWrite(lockPin, LOW);
    delay(delayTime);
}