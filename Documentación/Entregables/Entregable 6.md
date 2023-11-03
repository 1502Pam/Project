<h1> Diseño esquemático del circuito electrónico </h1> 

<image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/Esquema_electronico_actualizado.png"> 

<h1> Código de programación </h1> 

## Código de programación sensor FSR - micromotor de vibración

#define motorPin 5
#define sensorpin A0
int sensorFSR;
int tmap;
void setup(){
 pinMode(motorPin, OUTPUT);
 pinMode(sensorpin, INPUT);
 Serial.begin(9600);//iniciación de comunicación serial a 9600 baudios
}

void loop(){
 sensorFSR=analogRead(A0);
 Serial.println(sensorFSR);
 tmap= map(sensorFSR, 0, 1023, 0, 255);
 if(sensorFSR>750){/sujetando cerca a 253 gramo-fuerza
 	Serial.print("Se esta aplicando demasiada fuerza");
	Serial.print("\nDisminuir presion");
 	Serial.print(" \n");
   	analogWrite(motorPin, tmap);
  }
 else{
   digitalWrite(motorPin, LOW);
   	Serial.print("Presion Adecuada");
 	Serial.print(" \n");
  }   
}

## Código de programación sensor EMG - minibomba de aire - 2 microválvulas

#define EMG_SENSOR_PIN A1         // Sensor EMG conectado al pin analógico A1
#define AIR_PUMP_PIN 6            // Bomba conectada al pin digital 6
#define VALVE1_PIN 2              // Microválvula 1 conectada al pin digital 2
#define VALVE2_PIN 7              // Microválvula 2 conectada al pin digital 7

int sensor_EMG;
int umbral = 300;                 // Umbral de activación para la señal EMG

void setup() {
    pinMode(EMG_SENSOR_PIN, INPUT);
    pinMode(AIR_PUMP_PIN, OUTPUT);
    pinMode(VALVE1_PIN, OUTPUT);
    pinMode(VALVE2_PIN, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    sensor_EMG = analogRead(A1);
    Serial.println(sensor_EMG);

    if (sensor_EMG >= umbral) {
        digitalWrite(AIR_PUMP_PIN, HIGH);

        // Activar válvula 1
        digitalWrite(VALVE1_PIN, HIGH);
        delay(1000);

        // Desactivar válvula 1
        digitalWrite(VALVE1_PIN, LOW);
        digitalWrite(AIR_PUMP_PIN, LOW);

        if (sensor_EMG < umbral){
          //Activar válvula 2
          digitalWrite(VALVE2_PIN,HIGH);
          delay(1000);
        }

    } 
    
    else {
        Serial.print("No se detectó el umbral mínimo para activar el funcionamiento de la prótesis\n");
        digitalWrite(AIR_PUMP_PIN, LOW);
        digitalWrite(VALVE1_PIN, LOW);
    }

}


<h1> Diagrama de flujo </h1> 


<h1> Video </h1> 

https://github.com/1502Pam/Project/assets/143039675/48213393-76ca-4721-b0cd-c3cb8b63df7f

https://github.com/1502Pam/Project/assets/143039675/e65b3c93-5101-48c0-b037-f210772002e8

