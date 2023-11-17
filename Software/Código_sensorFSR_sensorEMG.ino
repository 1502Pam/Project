#define EMG_SENSOR_PIN A4       // Sensor EMG conectado al pin analógico A4
#define AIR_PUMP_PIN 5          // Bomba conectada al pin digital 5
#define VALVE1_PIN 2            // Válvula para bomba conectado al pin digital 2
#define VALVE2_PIN 3            // Válvula para expulsión conectado al pin digital 3
#define motorPin 6              // Pin del motor digital 6
#define sensorpin A3            // Pin del sensor FSR analógico 3

// Variables Sensor EMG
int sensor_EMG;
int contador;                   // Diferenciar entre flexión/extensión
int val_filtrado = 0;
int sen_analog = 0;
#define alpha 0.03;             // Factor de suavizado
const int x = 20;               // Constante entera

// Variables Sensor FSR
int sensorFSR;
int tmap;
int i;
int auxSuma;
int promFSR;

void setup() {
  pinMode(EMG_SENSOR_PIN, INPUT);
  pinMode(AIR_PUMP_PIN, OUTPUT);
  pinMode(VALVE1_PIN, OUTPUT);
  pinMode(VALVE2_PIN, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(sensorpin, INPUT);
  Serial.begin(9600);
}

void loop() {
    
    contador = 1; 		// Siempre valor inicial = 1

    // Sensor FSR
    for (i = 1; i <= 10; i++) {
        sensorFSR = analogRead(sensorpin);
        delay(10);
        auxSuma += sensorFSR;
    }
    promFSR = auxSuma / 10;
    auxSuma = 0;
    Serial.print("Sensor FSR: ");
    Serial.println(sensorFSR);
    tmap = map(promFSR, 0, 1000, 10, 255);
    analogWrite(motorPin, tmap);
  
  // Filtro EMA (Promedio móvil exponencial) para señal EMG
    sensor_EMG = analogRead(EMG_SENSOR_PIN);
    val_filtrado = (alpha * sensor_EMG)+((1-alpha)*val_filtrado); 	//valFiltrado: de valor anterior
    //Imprimir valor del Sensor EMG
    Serial.print("Sensor EMG: ");
    Serial.print(sensor_EMG);
    Serial.print(" , ");
    Serial.println(val_filtrado);

  // Control de la bomba basado en el sensor EMG
    if (val_filtrado >x && contador=1) {
    //Se realiza agarre 
      digitalWrite(AIR_PUMP_PIN, HIGH);
      digitalWrite(VALVE1_PIN, HIGH);				// Válvula abierta
      digitalWrite(VALVE2_PIN, LOW);				// Válvula cerrada
      delay(500);
      digitalWrite(VALVE1_PIN, LOW); 				// Mantener agarre
      digitalWrite(AIR_PUMP_PIN, LOW); 

      Serial.print("**Cierra Mano**");
      Serial.print("Contador: ");
      Serial.print(contador);
      contador = 2;
    } 
    else if (val_filtrado >x && contador=2){
      //Realizar extensión del pulgar
      digitalWrite(VALVE2_PIN, HIGH);				// Válvula abierta
      //valvula de la bomba cerrada
      digitalWrite(VALVE1_PIN, LOW);
      Serial.print("**Abre Mano**");
      Serial.print("Contador: ");
      Serial.print(contador);
    }
  delay(500);  
}