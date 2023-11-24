#define EMG_SENSOR_PIN A4       // Sensor EMG conectado al pin analógico A4
#define AIR_PUMP_PIN 5          // Bomba conectada al pin digital 5
#define VALVE1_PIN 2        // Válvula para microválvulas de aire conectada a bomba
#define VALVE2_PIN 7        // Válvula para expulsión de aire 
#define motorPin 6              // Pin del motor 
#define sensorpin A3            // Pin del sensor FSR
#define alpha 0.03 //factor de suavizado

//variables del emg
int sensor_EMG;
int contador=1; //diferenciar entre flexión/extensión
int val_filtrado = 0;
int sen_analog = 0;
const int x = 24; //cte entera
int periodo= 4000;
int periodo2= 4000;
unsigned long tiempoAhora=0;

//variables del fsr
int sensorFSR;
int tmap;
int i;
int auxSuma;
int promFSR;

void setup() {
  pinMode(EMG_SENSOR_PIN, INPUT);
  pinMode(AIR_PUMP_PIN, OUTPUT);
  //válvula 1
  pinMode(VALVE1_PIN, OUTPUT);
  //válvula 2
  pinMode(VALVE2_PIN, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(sensorpin, INPUT);
  Serial.begin(9600);
}

void loop() {
    //contador =1; //siempre valor inicial =1

    // Sensor FSR
    for (i = 1; i <= 10; i++) {
        sensorFSR = analogRead(sensorpin);
        delay(10);
        auxSuma += sensorFSR;
    }
    promFSR = auxSuma / 10;
    auxSuma = 0;
  	//Serial.print("Sensor FSR: ");
    //Serial.println(sensorFSR);
    tmap = map(promFSR, 0, 1000, 10, 255);
    analogWrite(motorPin, tmap);
  
  // FILTRO EMA (Promedio móvil exponencial) para señal EMG
    sensor_EMG = analogRead(EMG_SENSOR_PIN);
    val_filtrado = (alpha * sensor_EMG)+((1-alpha)*val_filtrado); //valFiltrado de valor anterior
    //imprimir sensor EMG
  	//Serial.print("Sensor EMG: ");
    Serial.print(sensor_EMG);
    Serial.print(" , ");
    Serial.println(val_filtrado);
    //Serial.print(" , ");
    //Serial.println(contador);

  // Control de la bomba basado en el sensor EMG
    if (val_filtrado > x && contador == 1) {
    //se realiza agarre 
      digitalWrite(AIR_PUMP_PIN, HIGH);
      digitalWrite(VALVE1_PIN, HIGH);//válvula abierta
      digitalWrite(VALVE2_PIN, LOW);//válvula cerrada
      if(millis()> tiempoAhora + periodo){ //temporizador
        tiempoAhora=millis();
        digitalWrite(VALVE1_PIN, LOW); // Mantener agarre
        digitalWrite(AIR_PUMP_PIN, LOW);
        contador =2;
      }
      Serial.println("*Cierra Mano*");
      //Serial.print("Contador: ");
      //Serial.println(contador);
      
    } 
    else if (val_filtrado > x && contador == 2){
      Serial.println("*Abre Mano*");
      //Serial.print("Contador: ");
      //Serial.println(contador);
      if(millis()> tiempoAhora + periodo2){ //temporizador
        tiempoAhora=millis();
        //Realizar extensión del pulgar
        
 //valvula de la bomba cerrada
digitalWrite(VALVE1_PIN, LOW);
digitalWrite(VALVE2_PIN, HIGH);//abierta

       contador =1;
      }
    }
  delay(10);  
}
