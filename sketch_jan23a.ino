int sensorPin1 = A0;
 int sensorPin2 = A1;
 int ledPin1 = 13;
 int ledPin2 = 12;
 int sensorValue1 = 0;
 int sensorValue2 = 0;
void setup() {
 pinMode(ledPin1,OUTPUT);
 pinMode(ledPin2,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  sensorValue1 = analogRead(sensorPin1);
  sensorValue2 = analogRead(sensorPin2);
  if(sensorValue1>100 && sensorValue2<100){
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,LOW);
    Serial.println(0);
  }
  else if(sensorValue1<100 && sensorValue2>100){
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
    Serial.println(1);
  }
  else if(sensorValue1==100 && sensorValue2==100){
    exit(0);
  }
}
