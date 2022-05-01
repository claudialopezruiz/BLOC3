const int Buzzer=3;
int valorLDR=0;
int freqBuzzer=0;

void setup()
{
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
  
}
void loop ()
{
  valorLDR=analogRead(A0);
  freqBuzzer=map(valorLDR,0,1023,20,5000);
  
  tone(Buzzer, freqBuzzer);
  
  Serial.print("LDR(0-1023)=");
  Serial.print(valorLDR);
  Serial.print("\t To del so del buzzer=");
  Serial.print(freqBuzzer);

  delay(20);
}
