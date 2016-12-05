void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
int ANALOG = analogRead(A0);
float tegangan= ANALOG * 5.0 /1023.0;
float i = (5.0 - tegangan)/2200.0;//nilai resistor yang menjadi acuan(R1)
float resistor = tegangan /i;
Serial.println(tegangan);
Serial.println(resistor);
}

void loop() {
  // put your main code here, to run repeatedly:

}
