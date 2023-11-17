#define motorPin 5
#define sensorpin A0
int sensorFSR;
int tmap;
int i;
int auxSuma;
int promFSR;
void setup(){
 pinMode(motorPin, OUTPUT);
 pinMode(sensorpin, INPUT);
 Serial.begin(9600);//iniciación de comunicación serial a 9600 baudios
}

void loop(){
  //for (int thisPin = 7; thisPin >= 2; thisPin--) {
  for (i=1;i<=10;i++){
  sensorFSR=analogRead(A0);
  delay(10);
  auxSuma += sensorFSR;
  }
  promFSR = auxSuma/10;
 auxSuma=0;
 Serial.println(sensorFSR);
 tmap= map(promFSR, 0, 1000, 10, 255);
  analogWrite(motorPin, tmap);
  delay(10);
}