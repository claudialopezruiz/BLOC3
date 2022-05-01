int trigPin = 8;
int echoPin = 9;
long duration;
int cm = 0;
void setup () {
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(2);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration=pulseIn(echoPin,HIGH);

duration=duration/2;
cm=duration/29;
Serial.print("Distancia:");
Serial.println(cm);
delay(100);
}
