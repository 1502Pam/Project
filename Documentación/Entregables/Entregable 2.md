## Estado del arte científico
1. Diseño de brazalete EMGs en prótesis de mano para reducción de costos<sup>[13](https://www.sciencedirect.com/science/article/abs/pii/S0208521619304693)</sup>.

Se llevó a cabo una investigación de diferentes tipos de prototipos de prótesis de mano, en la que se evaluaron los elementos utilizados para su respectivo funcionamiento, la metodología empleada para un mejor control y el costo de fabricación. El prototipo ganador fue desarrollado por Krausz et al. Su diseño se basa en una mano de seis grados de libertad y es de código abierto. A partir de este prototipo, se buscó optimizarlo mediante cambios en los dispositivos de transmisión de potencia y actuación con el fin de reducir costos y mejorar la funcionalidad.
El procesamiento de los datos EMG se obtendrá a través de un hardware portátil basado en la arquitectura maestro-esclavo. Como dispositivo maestro, se utilizará un sistema basado en Raspberry Pi interconectado con el brazalete EMG, que recopilará y clasificará el movimiento. Como dispositivo esclavo, se empleará un microcontrolador ATmega328 que definirá los movimientos recopilados y procesados por el dispositivo maestro.

<image src ="https://github.com/1502Pam/Project/blob/69620e2351e32556382e2b7bd61a9802c00276ee/Im%C3%A1genes/R1.jpg"> 

2. Construcción de músculos neumáticos<sup>[15](https://www.sciencedirect.com/science/article/abs/pii/S0957415816301532)</sup>.

Se presenta una metodología para la construcción de músculos neumáticos. Para evaluar la funcionalidad de este proyecto, se desarrolló un dedo mecatrónico que, al igual que un dedo humano convencional, consta de tres falanges. Este dedo posee dos características distintivas: funcionalidad y antropomorfismo. Se llevaron a cabo pruebas tanto con carga como sin ella, y se observó que los movimientos de los dedos fueron suaves y precisos.
Para controlar el movimiento de cada articulación, se obtuvieron las ecuaciones cinemáticas directas e inversas, las cuales se ajustaron a controladores tipo PID. Para medir la posición angular de cada articulación, se emplearon sensores de efecto Hall.
El uso de músculos neumáticos se presenta como una alternativa a los actuadores convencionales, como solenoides o motores (tales como motores de corriente continua y servomotores, entre otros). Los músculos neumáticos requieren presiones de aire del orden de 3 a 6 bares para generar fuerzas que van desde 30 hasta incluso 1000N. Un músculo neumático es un actuador de tracción, ya que se contrae y expande de manera similar a un músculo biológico. Este músculo está compuesto por un material elástico homogéneo recubierto por fibras retorcidas, creando una estructura similar a una red. La presión de aire se aplica como entrada para lograr su funcionamiento.

<image src ="https://github.com/1502Pam/Project/blob/69620e2351e32556382e2b7bd61a9802c00276ee/Im%C3%A1genes/R2.jpg"> 

3.Diseño de prótesis para discapacitados por conflictos bélicos<sup>[16](https://pubmed.ncbi.nlm.nih.gov/29196160/)</sup>.
   
Se ha creado una mano protésica utilizando técnicas electromiográficas. Su segunda función es aprender a percibir objetos para determinar la cantidad de presión que debe ejercer. El sensor muscular captura las señales del músculo humano, y estas señales se transmiten al microcontrolador. Este último, basándose en algoritmos preprogramados, genera una señal de salida que se utiliza para controlar el actuador robótico suave, el cual emplea un mecanismo de bombeo.
El material seleccionado para la construcción es el PLA debido a su ligereza y capacidad de aplicar presión. Aunque se consideraron nanofibras de carbono, se descartaron debido a su impacto en el costo de fabricación.
En relación al microcontrolador, se utiliza para gestionar las acciones y la presión aplicada por el actuador. En el caso de los actuadores neumáticos, se emplea el sistema Pneunet, controlado mediante microhidráulica. Este mecanismo de inyección de fluido es accionado por un motor que empuja el pistón, suministrando así el fluido necesario para activar el actuador y lograr el agarre. Una vez finalizada la acción, el pistón regresa a su posición de equilibrio, lo que devuelve el fluido al actuador Pneunet. Los autores han optado por la hidráulica debido a la complejidad de tratar con la compresión del aire, asegurando así que el sistema pueda determinar la cantidad de fuerza a aplicar sin dañar el objeto.
El mecanismo se considera "sencillo" debido a que la mano no cuenta con un mecanismo de sensibilidad comparable a la piel humana. En cambio, los ojos asumen esta función, detectando el material a manipular. El cerebro genera señales que se transmiten a los músculos de la mano, donde son detectadas por sensores musculares, activando el mecanismo previamente mencionado.

<image src ="https://github.com/1502Pam/Project/blob/69620e2351e32556382e2b7bd61a9802c00276ee/Im%C3%A1genes/R3.jpg"> 

## Estado del arte comercial

### A) Equipos o dispositivos existentes en el mercado

|| Dispositivos existentes en el mercado ||
| ------------- | ------------- |------------- |
| GripLock Finger<sup>[17](https://www.npdevices.com/wp-content/uploads/2022/01/GripLock-Finger-Solo-Sheet-English-Dec-20-2021-edge-.pdf)</sup> | THUMBDriver<sup>[18](https://www.npdevices.com/wp-content/uploads/2022/01/ThumbDriver-Solo-Sheet-English-Dec-20-2021-edge.pdf)</sup> | PIPDriver<sup>[19](https://www.npdevices.com/wp-content/uploads/2022/01/PIPDriver-Solo-Sheet-English-Dec-20-2021-edge.pdf)</sup> |
| <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/griplock.png"> | <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/thumbdriver.png"> | <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/PIPdriver.png"> |
| Dedo protésico para la falange media, de bloqueo pasivo y posicionable, diseñado para ser laminado en un encaje parcial a medida. Está diseñado para soportar con firmeza más de 90.71kg en agarre de gancho. | Diseñado para la falange proximal del pulgar. Al igual que el MCP driver este dispositivo se acciona mediante una articulación MCP (metacarpofalángica), pero especialmente en actividades para el pulgar. Gracias al diseño el dispositivo se adapta a las necesidades del usuario, esto facilita la realización de pellizco y agarre.|Diseñada para extremidades parciales y dedos en la falange media o distal. Su diseño se adapta a las articulaciones PIP (distal interfalángica) y DIP (proximal interfalángica). Acciona mediante una articulación PIP intacta con suficiente residuo para encajar la jaula. Esto hace que la estructura en forma de jaula proteja el residuo(muñón). |
| Materiales: <p> - nylon 12 (medical grade) <p> - silicona <p> - aluminio 7075-T6 <p> Resistencia al calor: <p> - nylon 175 C <p> - silicona 204.4C | Materiales: <p> - nylon 12 (medical grade) <p> - silicona <p> - stainless 316 <p> - titanio <p> Resistencia al calor: <p> - nylon 175 C <p> - silicona 204.4 C <p> Resistencia a la tensión del anillo: <p> - 36.28kg | Materiales: <p> - nylon 12 (grado médico) <p> - silicona <p> - titanio <p> Resistencia al calor: <p> - nylon 175 C <p> - silicona 204.4 C <p> Resistencia al aplastamiento: <p> - mayor a 27.22kg |


### B) Patentes de invención y Patentes de modelo de utilidad

|| Invención|| Utilidad |
| ------------- | ------------- |------------- |---------- |
| Prótesis mioeléctrica y método<sup>[20](https://patents.google.com/patent/US10376389B2/en?q=(amputation+prothesis+thumb)&oq=amputation+or+prothesis+thumb+)</sup>	| Prótesis de mano multifuncional y autónoma<sup>[21](https://worldwide.espacenet.com/patent/search?q=pn%3DES2571880T3)</sup>	| Una prótesis de mano<sup>[22](https://worldwide.espacenet.com/patent/search?q=pn%3DWO2022132105A1)</sup>	| Prótesis trans de articulación de muñeca y pulgar impresora 3D<sup>[23](https://worldwide.espacenet.com/patent/search?q=pn%3DCN218652141U)</sup> |
| <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/protesis_mioel%C3%A9ctrica.png"> | <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/protesis_multifuncional.png"> | <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/protesis_mano.png"> | <image src ="https://github.com/1502Pam/Project/blob/main/Im%C3%A1genes/protesis_trans.png"> |
| Gaston y Loeffler -Estados Unidos (2017) | Controzzi, Clemente, Cipriani, Carrozza - España (2016) | HOCAOĞLU ÇETİNSOY – Turkia (2022) | Wei Qipei; Liu Chang; Yang Chen; Chen Shanlin – China (2023) |
| Es una próstesis de trasferencia de señales con electrodos, describe con exactitud la conexión de cada uno de los nervios que generan el movimiento de los músculos en la mano. Utiliza microprocesadores multicanal, entradas EMG, motores, etc., es el mayor avance para las prótesis mioeléctricas. El ensamblado al paciente es un método quirúrgico. | Prótesis de mano que permite la rotación, abducción y flexión del dedo, a partir de un sistema eléctrico y árbol motor rotativo que están programados para el movimiento restringido, a partir del análisis del movimiento angular. Utilizan el mecanismo rotativo de cruz de malta y una línea de trasmisión del movimiento. | Se utiliza señales electromiografías de superficie y polímeros que tiene memoria elástica y que cambian su rigidez dependiendo de factores externos. Dividen la estructura tres huesos con poleas y calentadores. EL movimiento lo generan motores DC de control, no se utiliza ningún tipo de algoritmo, es de bajo costo, gran adaptabilidad al amputado, lo que reduce el tiempo de rehabilitación. | A otras modelos de prótesis 3D se incluye una bola, tapa y varilla metacarpiana que se conectan por rosca con los otros huesos y la varilla se coloca en una posición alejada mejorando el uso técnico de la prótesis. Utiliza materiales como polietileno, cromo de cobalto, aleación de aluminio biológicamente compatibles. |


## Lista de requerimientos
### Funcionales
- Realizar y regular el agarre de fuerza necesario para permitir la reinserción laboral.
- Permitir el movimiento circundal del pulgar.
- Medir los ángulos de los dedos restantes de la mano para ajustar su movimiento.
- Almacenar energía en una bateria.

### No Funcionales
- Ergonómico
- Tamaño proporcional al paciente
- Ligero
- Accesible
- Poseer la fricción necesaria para evitar el deslizamiento de objetos.
- Portátil 


## Propuesta de solución
Pulgar mioeléctrico protésico diseñado para restaurar el agarre de fuerza.

