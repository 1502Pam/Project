# Equipo 12

#### Bienvenidos al repositorio del Equipo 12 del curso Fundamentos de Biodiseño

<image src ="Imágenes/foto_grupal_2.jpg"> 


## Tabla de contenido

- [Roles de los integrantes del proyecto](#Roles-de-los-integrantes-del-proyecto).
- [Análisis del caso clínico](#Análisis-del-caso-clínico).
- [Clínica de problemáticas en salud](#Clínica-de-problemáticas-en-salud).
- [Problemática](#Problemática).
- [Estado del arte científico](#Estado-del-arte-científico).
- [Estado del arte comercial](#Estado-del-arte-comercial).
- [Lista de requerimientos](#Lista-de-requerimientos).
- [Propuesta de solución](#Propuesta-de-solución).
- [Caja negra](#Caja-negra).
- [Esquema de funciones](#Esquema-de-funciones).
- [Matriz morfológica](#Matriz-morfológica).
- [Tabla de valoración](#Tabla-de-valoración).
- [Conclusión-del-CS](#Conclusión-del-CS).
- [Bocetos](#Bocetos).
- [Docentes del curso](#Docentes-del-curso).
- [Bibliografía](#Bibliografía).


## Roles de los integrantes del proyecto
- Chavez Rivas Allen Stirs (Planificador de la electrónica)
- Lazares Salcedo, Brayam Joe (Planificador de diseño de los planos del prototipo)
- Llanos Florian Dhiago Gustavo (Coordinador del grupo y planificador de manufactura digital)
- Medina Burga Yuliana Abigail (Planificador del modelado 3D del prototipado)
- Sanchez Valverde Mariel Linette (Planificador de programación)
- Vilchez Cotrina Pamela Nicole (Planificador del repositorio Github)


## Análisis del caso clínico

### A) Contexto

Según Global Burden of Disease (GBD)<sup>[1](https://vizhub.healthdata.org/gbd-results?params=gbd-api-2019-permalink/5ed2741ada3f6d3537da4bec76913a24)</sup>, existe una prevalencia mundial de amputaciones cercana a 500 millones de personas entre los periodos 1990 y 2019.

<image src ="Imágenes/B1.png"> 
   
###### Figura 1: Gráfica de prevalencia de amputaciones en personas mayores a 25 años desde 1990 hasta 2019 a nivel global. Obtenido del GBD

Inclusive los números han ido en crecimiento; por ende, se estima que, para este año 2023, la cifra habrá sobrepasado los 500 millones de personas mayores a 25 años con algún tipo de amputación.

<image src ="Imágenes/B2.png"> 
   
###### Figura 2: Gráfica de prevalencia del tipo de amputaciones en personas mayores a 25 años en el período 1990-2019 a nivel global. Obtenido del GBD

El tipo de amputación más común es en dedos, con una prevalencia que supera los 300 millones casos y que representa el 69.71% de las amputaciones totales, según los datos otorgados por el GBD. Además, la gráfica hace una clara diferencia entre los dedos y el pulgar, esto puede deberse a una mayor importancia del pulgar sobre los demás dedos.

<image src ="Imágenes/B3.png"> 

###### Figura 3: Gráfica de prevalencia en el período 1990-2019 e incidencia del año 2019 de amputaciones en el pulgar a nivel global. Obtenido del GBD

En cuanto a la estadística de amputaciones del pulgar, el 21.8% de amputaciones totales de dedos son de pulgares. Además, la incidencia de este tipo de amputación, en el año 2019, fue superior a un millón a nivel global.

<image src ="Imágenes/B4.png"> 

###### Figura 4: Gráfica de prevalencia en el período 1990-2019 e incidencia del año 2019 de amputaciones del pulgar en Latinoamérica. Obtenido del GBD

A nivel de Latinoamérica, se tiene una prevalencia superior a los 9 millones y una incidencia, en 2019, de 128000 personas con amputaciones del pulgar. A partir de la gráfica, se aprecia que la zona andina de países como Perú, Bolivia y Ecuador tiene la menor estadística; no obstante, el tamaño de población de cada una es inferior respecto al resto de regiones latinoamericanas.

<image src ="Imágenes/B5.png"> 

###### Figura 5: Prevalencia de amputaciones del pulgar a nivel global en el período 1990-2019. Obtenido del GBD.
   
En el Perú, existe una prevalencia de 400 mil personas con amputaciones de dedo en el período 1990-2019; además, según el Boletín Estadístico Mensual de Notificaciones de accidentes de Trabajo, Incidentes Peligrosos y Enfermedades Ocupacionales, durante el mes de abril del 2023, se reportaron 2390 personas que sufrieron accidentes de trabajo, destacando los siguientes datos<sup>[2](https://cdn.www.gob.pe/uploads/document/file/4811002/SAT_MARZO_2023_opt.pdf?v=1688742640), [3](https://cdn.www.gob.pe/uploads/document/file/4811381/SAT_ABRIL_2023_opt.pdf?v=1688744828)</sup> : 

| Accidentes de trabajo | Especificación | Cantidad de personas afectadas | Fecha de registro de datos |
| ------------- | ------------- | ------------- | -------------- |
| Agente causante  | Generador de energía excepto motores eléctricos | 10 | Marzo 2023 |
|   | Contacto con la corriente eléctrica  | 13 | Marzo 2023 |
| Naturaleza de la lesión | Amputación | 20 | Marzo 2023 |
| Parte del cuerpo afectada | Dedos de la mano | 411 | Abril 2023 |
|  | Mano (excepción de los dedos solos) | 139 | Abril 2023 |
| Naturaleza de la lesión | Amputación | 13 | Abril 2023 |
| Agente causante | Instalaciones eléctricas, incluidos los motores eléctricos pero con exclusión de las herramientas eléctricas manuales | 1 | Abril 2023 |
###### Tabla 1: Tabla de accidentes de trabajo del mes de abril y marzo 2023. Elaboración propia en base a datos obtenidos del Ministerio de Trabajo y Promoción del Empleo

En el mes indicado, 411 personas sufrieron de amputaciones de dedos; es decir, en aproximadamente 137 casos, el pulgar fue amputado. Este dato es muy significante, puesto que la amputación del pulgar resulta en una pérdida del 40% de las funciones de la mano y en un 22% de la función total de la persona<sup>[4](https://doi.org/10.1016/j.hcl.2020.09.013), [5](https://journals.sagepub.com/doi/abs/10.1177/1558944721999734)</sup>.


### B) Consecuencias de un pulgar amputado

#### 1. Síndrome del miembro fantasma
   
Perder una parte del cuerpo desencadena una serie de consecuencias funcionales psicológicas y fisiológicas<sup>[4](https://doi.org/10.1016/j.hcl.2020.09.013)</sup>; de hecho, la consecuencia más común y conocida es el síndrome del miembro fantasma. Entre un 60-80% de los usuarios amputados experimentan sensación de dolor del miembro fantasma, donde el 95% de estos reportan experimentar dolor en las primeras semanas posteriores a la amputación y el 60-70% después de un año de la amputación<sup>[6](https://doi.org/10.1016/j.cjtee.2018.04.006)</sup>.

| Clasificación de la sensación de dolor | Descripción |
|-----------|------------|
| Dolor en el miembro residual  | Percepción dolorosa en el segmento no amputado |
| Sensación fantasma | Percepción no dolorosa del segmento amputado |
| Dolor del miembro fantasma | Percepción dolorosa en el segmento amputado |
###### Tabla 2: Clasificación de la sensación de dolor en el síndrome del miembro fantasma. Elaboración propia en base a los datos de la investigación de Kaur A. & Guan Y.

Por otro lado, existen factores fundamentales que determinan la sensación de dolor:

| Factores |  | Descripción |
|-----------|------------|-------|
| Factores periféricos  | Actividad de los nervios residuales | Se presenta degeneración retrógrada y acortamiento de las neuronas aferentes, las cuales generan neuromas que incrementan la sensibilización a los estímulos |
| Factores centrales | Plasticidad espinal | Posterior a la lesión de un nervio periférico, las neuronas del cuerno posterior de la médula espinal muestran sensibilización central; es decir, estímulos nociceptivos de corta duración generan potenciales postsinápticos aumentados durante un largo período de tiempo.|
| | Reorganización cortical | Las áreas neuronales adyacentes de la zona cortical que representaba el miembro amputado, presenta cambios de neuroplasticidad sobre la corteza motora primaria (M1) y somatosensorial primaria (S1). | 
###### Tabla 3: Factores de riesgo de dolor de miembro fantasma. Elaboración propia en base a la información de Kaur A. & Guang Y.

Por tales factores, el miembro fantasma depende de muchos cambios neurológicos causados por un cambio drástico en la anatomía del miembro amputado. En el caso del pulgar, estos cambios podrían variar o ser más complejos debido al rol del pulgar en la anatomía y fisiología de la mano.

#### 2. Merma del movimiento de la mano

El movimiento de la mano tiene un total de 25 grados de libertad (GDL) y se describe en el campo biomecánico por un conjunto de ángulos de rotación fisiológicos: flexión/extensión (F/E), abducción/aducción (Ab/Ad) y pronación/supinación (P/S)<sup>[7](http://www.xixcnim.uji.es/CDActas/Documentos/ComunicacionesPosters/01-13.pdf)</sup>.

<image src ="Imágenes/1M_n.jpeg"> 

###### Figura 6: Movimientos de la mano. Obtenido de la Asociación Española de Ingeniería Mecánica.

Además, el movimiento de la mano es producido por los músculos extrínsecos e intrínsecos, destacando a este último por su ubicación en la región de la muñeca y por la produccción de los movimientos del pulgar: abducción, aducción, flexión y oposición<sup>[8](https://revistas.unal.edu.co/index.php/morfolia/article/view/31373/31379)</sup>.
Cabe resaltar que la articulación del pulgar funciona básicamente con dos GDL predominantes (F/E y Ab/Ad); sin embargo, al amputarse este miembro, se pierden todos los movimientos del pulgar, mermando así los ángulos de rotación de la mano.

#### 3. Pérdida de los agarres de fuerza

Los agarres de fuerza crean patrones motores y señales nerviosas que originan el movimiento que deseamos. De esta manera, cuando la amputación se da en el pulgar, se desencadenan problemas como la hiperestesia<sup>[9](https://www.jhandtherapy.org/article/S0894-1130(22)00003-5/fulltext)</sup> y la pérdida de agarre de fuerza, el cual se clasifica en cilíndrico, esférico, gancho, precisión, palmar y lateral<sup>[10](https://ieeexplore.ieee.org/document/6610858), [11](https://www.oandplibrary.org/al/pdf/1955_02_022.pdf)</sup>.

<image src ="Imágenes/3M_n.jpeg"> 

###### Figura 7: Clasificación de los distintos agarres de fuerza. Obtenido de Taylor, C. & Schwarz, R.


### C) Alternativas de solución actuales ante la amputación de un miembro

En la actualidad, la mejor forma de adaptarse a realizar las mismas actividades de trabajo tras una amputación es a través del uso de una prótesis, puesto que está asociada con la disminución en la sensación del miembro fantasma y dolor en el miembro residual<sup>[4](https://doi.org/10.1016/j.hcl.2020.09.013)</sup>. Además, la fuerza desproporcionada en los miembros residuales se trabaja con rutinas de terapia, con el fin de enseñar al usuario a mantener las articulaciones en la posición adecuada<sup>[4](https://doi.org/10.1016/j.hcl.2020.09.013)</sup>. 

Para ello, existen 4 técnicas que permiten el ajuste del posicionamiento de una prótesis con el muñón<sup>[12](https://www.msdmanuals.com/es-pe/professional/temas-especiales/miembro-prot%C3%A9sico/opciones-para-las-pr%C3%B3tesis-de-los-miembros)</sup>. : al vacío, correas, succión e interfaz con traba. Dependiendo del tipo de movimiento y situación del usuario, se suelen fusionar con almohadillas de gel y medias protésicas. No obstante, este posicionamiento también puede depender del tipo de prótesis y sus diferentes funcionalidades<sup>[13](https://pubmed.ncbi.nlm.nih.gov/34043536/), [14](https://www.healthquality.va.gov/guidelines/Rehab/ULA/VADoDULACPG_ProviderSummary_Final_508.pdf)</sup>.

| Prótesis | Descripción | Tasa de abandono |
| ------------- | ------------- | ------------- |
| Prótesis funcional pasiva | <p> - Aumenta la longitud digital. <p> - Restaura la cosmosis y mejora el desempeño general de la mano. <p> - Suelen estar hechos de silicona | 100% |
| Prótesis impulsadas por el cuerpo (Body-Powered) | <p> - Aprovechan la anatomía restante de la amputación. <p> - Independientes de baterías externas o electricidad. <p> - Sincrónico con movimientos naturales de la mano. <p> - Limitaciones cosméticas (alto grado de mantenimiento y peso excesivo) | 80-85% |
| Prótesis impulsadas externamente (Externally-Powered) | <p> - Ideales para amputaciones trans-metacarpianas. <p> - Destacan las mioeléctricas (MYO) que registran señales de electromiografía de superficie. <p> - Logra posturas de agarre de forma independiente y sincronizada. | 75% |
| Prótesis para actividades específicas | <p> - Destinadas a varios tipos de amputaciones. <p> - Limitación a una única función a suplir. <p> - Preferido como herramienta de asistencia en lugar de reemplazo del bro amputado | |
###### Tabla 4: Tipos de prótesis y tasa de abandono. Elaboración propia a partir de datos los documentos [13](https://pubmed.ncbi.nlm.nih.gov/34043536/) y [14](https://www.healthquality.va.gov/guidelines/Rehab/ULA/VADoDULACPG_ProviderSummary_Final_508.pdf).

Sin embargo, la principal razón para el abandono de estos cuatro tipos de prótesis es el precio, el cual puede llegar a ser entre 5000 a 12000 dólares; por consiguiente, siendo poco asequible para muchos usuarios amputados. Pese a ello, la manufactura aditiva es el último avance en el campo del diseño protésico, pues es capaz de fabricar prótesis de bajo costo y menor peso. La característica principal de esta es su tecnología de fabricación aditiva, donde los productos son construidos agregando capa por capa en una placa de construcción para producir el producto final; otorgando como principal ventaja la capacidad de proporcionar una alta relación resistencia-peso a través de un relleno configurable<sup>[14](https://www.healthquality.va.gov/guidelines/Rehab/ULA/VADoDULACPG_ProviderSummary_Final_508.pdf)</sup>.


## Clínica de problemáticas en salud

El usuario presenta sensación de miembro fantasma y dolor persistente; por tal motivo, es necesario tomar medidas para fortalecer la musculatura residual y favorecer actividades uni/bimanuales para facilitar sus actividades de vida diarias.

Además, existen diversos problemas de los miembros inferiores en la amputación transtibial: marcha compensada, alteración sensorial táctil y dificultad para reconocer un adecuado punto de apoyo. 

Por otro lado, en cuanto a los miembros superiores, se distinguen las siguientes dificultades tras la amputación transmetacarpiana y desarticulación interfalángica proximal del dedo medio: dolor palpable a nivel de musculatura interósea y lumbricales, control inadecuado de la presión palmar, movimiento mínimo del músculo oponente del pulgar y fuerza de presión disminuída.


## Problemática

Hay una deficiencia de prótesis de pulgar especializados en el agarre de fuerza.

## Estado del arte científico
1. El tercer pulgar<sup>[13](https://pubmed.ncbi.nlm.nih.gov/34043536/)</sup>.

Se llevó a cabo una investigación orientada a determinar la viabilidad de alcanzar una mejora motora exitosa mediante la adición de un pulgar robótico suplementario, y a su vez, explorar las implicaciones que ello conlleva tanto en la representación neuronal como en la funcionalidad de la mano biológica. 
Para ello, los voluntarios fueron sometidos a un entrenamiento específico para operar un pulgar robótico adicional, denominado "Tercer Pulgar", durante un período de cinco días. Se abordaron situaciones cotidianas no estructuradas y  entornos de laboratorio, con el propósito de indagar en la representación de la mano amplificada antes y después del período de entrenamiento. 
Los resultados revelaron notables avances en términos del control motor del tercer pulgar. Sin embargo, es importante destacar que el empleo del tercer pulgar generó una reducción en las sinergias cinemáticas naturales presentes en la mano biológica.

<image src ="Imágenes/tercer_pulgar.jpg"> 

2. Three-dimensional printed prosthesis demonstrates functional improvement in a patient with an amputated thumb: A technical note<sup>[15](https://journals.sagepub.com/doi/epub/10.1177/0309364616679315)</sup>.

Se creó una prótesis personalizada a un hombre de 67 años con una amputación del pulgar derecho por encima de la articulación metacarpofalángica. Para la prótesis se escanearon las manos del usuario y se procedió a imprimir en 3D la prótesis del pulgar derecho con un elastómero termoplástico flexible, todo en un lapso de 48 horas y a un costo de $50. Posteriormente, se evaluó el producto mediante el Test de Función de la Mano Jebsen-Taylor y el Test de Bloques y Cajas. Los resultados de satisfacción del usuario fueron “muy satisfechos” y se reportó gran facilidad para actividades cotidianas al emplear la prótesis.

<image src ="Imágenes/4B.png"> 

3. Evaluación funcional cuantitativa de una prótesis impresa en 3D con silicona incrustada para la amputación parcial de la mano: un informe de caso<sup>[16](https://pubmed.ncbi.nlm.nih.gov/29196160/)</sup>.
   
El estudió se centró en un usuario masculino con una amputación parcial de la mano no dominante. A modo de solución, se diseñaron dos prótesis en cuyo proceso de diseño fue crucial la retroalimentación del usuario para crear un producto que ayude al usuario en sus actividades laborales. Estas prótesis personalizadas e impresas en 3D con silicona incrustada fueron evaluadas utilizando el Test de Función de la Mano Jebsen; mediante el cual se observó que, un diseño de prótesis más simple (prótesis 2) fue más útil y robusto que uno sofisticado (prótesis 1). Por otro lado, el estudio destaca el potencial de las prótesis impresas en 3D e importancia de la personalización para mejorar la calidad de vida de personas con amputaciones parciales de la mano.

<image src ="Imágenes/2B.png"> 


## Estado del arte comercial

### A) Equipos o dispositivos existentes en el mercado

|| Dispositivos existentes en el mercado ||
| ------------- | ------------- |------------- |
| GripLock Finger<sup>[17](https://www.npdevices.com/wp-content/uploads/2022/01/GripLock-Finger-Solo-Sheet-English-Dec-20-2021-edge-.pdf)</sup> | THUMBDriver<sup>[18](https://www.npdevices.com/wp-content/uploads/2022/01/ThumbDriver-Solo-Sheet-English-Dec-20-2021-edge.pdf)</sup> | PIPDriver<sup>[19](https://www.npdevices.com/wp-content/uploads/2022/01/PIPDriver-Solo-Sheet-English-Dec-20-2021-edge.pdf)</sup> |
| <image src ="Imágenes/griplock.png"> | <image src ="Imágenes/thumbdriver.png"> | <image src ="Imágenes/PIPdriver.png"> |
| Dedo protésico para la falange media, de bloqueo pasivo y posicionable, diseñado para ser laminado en un encaje parcial a medida. Está diseñado para soportar con firmeza más de 90.71kg en agarre de gancho. | Diseñado para la falange proximal del pulgar. Al igual que el MCP driver este dispositivo se acciona mediante una articulación MCP (metacarpofalángica), pero especialmente en actividades para el pulgar. Gracias al diseño el dispositivo se adapta a las necesidades del usuario, esto facilita la realización de pellizco y agarre.|Diseñada para extremidades parciales y dedos en la falange media o distal. Su diseño se adapta a las articulaciones PIP (distal interfalángica) y DIP (proximal interfalángica). Acciona mediante una articulación PIP intacta con suficiente residuo para encajar la jaula. Esto hace que la estructura en forma de jaula proteja el residuo(muñón). |
| Materiales: <p> - nylon 12 (medical grade) <p> - silicona <p> - aluminio 7075-T6 <p> Resistencia al calor: <p> - nylon 175 C <p> - silicona 204.4C | Materiales: <p> - nylon 12 (medical grade) <p> - silicona <p> - stainless 316 <p> - titanio <p> Resistencia al calor: <p> - nylon 175 C <p> - silicona 204.4 C <p> Resistencia a la tensión del anillo: <p> - 36.28kg | Materiales: <p> - nylon 12 (grado médico) <p> - silicona <p> - titanio <p> Resistencia al calor: <p> - nylon 175 C <p> - silicona 204.4 C <p> Resistencia al aplastamiento: <p> - mayor a 27.22kg |


### B) Patentes de invención y Patentes de modelo de utilidad

|| Invención|| Utilidad |
| ------------- | ------------- |------------- |---------- |
| Prótesis mioeléctrica y método<sup>[20](https://patents.google.com/patent/US10376389B2/en?q=(amputation+prothesis+thumb)&oq=amputation+or+prothesis+thumb+)</sup>	| Prótesis de mano multifuncional y autónoma<sup>[21](https://worldwide.espacenet.com/patent/search?q=pn%3DES2571880T3)</sup>	| Una prótesis de mano<sup>[22](https://worldwide.espacenet.com/patent/search?q=pn%3DWO2022132105A1)</sup>	| Prótesis trans de articulación de muñeca y pulgar impresora 3D<sup>[23](https://worldwide.espacenet.com/patent/search?q=pn%3DCN218652141U)</sup> |
| <image src ="Imágenes/protesis_mioeléctrica.png"> | <image src ="Imágenes/protesis_multifuncional.png"> | <image src ="Imágenes/protesis_mano.png"> | <image src ="Imágenes/protesis_trans.png"> |
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

## Caja negra

<image src ="Imágenes/caja_negra.jpeg"> 


## Esquema de funciones

<image src ="Imágenes/esquema_nuevoo.jpeg"> 


## Matriz morfológica 

<image src ="Imágenes/matriz_ahora_si.jpg">

## Tabla de valoración

| N° | Criterios | CS1 | CS2 | CS3 |
|-----------|------------|-----------|-----------|-----------|
| 1 |Funcionalidad|3|**4**|3|
| 2 |Nivel de Innovacion|3|**4**|2|
| 3 |Seguridad|2|**3**|2|
| 4 |Disponibilidad de repuestos|3|**4**|2|
| 5 |Durabilidad|3|**3**|2|
| 6 |Ligereza|2|**3**|2|
| 7 |Portabilidad|1|**4**|3|
| 8 |Posibilidad de automatización|3|**3**|3|
| 9 |Gasto energético|1|**3**|4|
| 10 |Costo de tecnología|1|**4**|2|
|----|Suma total| 22 | **35** | 25 |


## Bocetos

### Título del proyecto: Prótesis del dedo pulgar, boceto preliminar 1

Dibujado por: Pamela Nicole Vilchez Cotrina

<image src ="Imágenes/boceto1.png">

Lista de despiece

<image src ="Imágenes/despiece_1_Actualizazo.jpeg">

Descripción del funcionamiento

La prótesis del dedo pulgar recibe la señal proveniente del dedo pulgar de la otra mano, la cual es captada por el sensor EMG, y es procesada por el arduino nano 33 iot que presenta un microprocesador, el cual transmite la señal obtenida vía bluetooth. Dicho microprocesador está siendo alimentado por una fuente de energía provista por una batería. Esta señal transmitida es recibida por el servomotor, el cual se encarga de activar el funcionamiento de la prótesis mediante el hilo tensor de nylon. Para proteger los componentes electrónicos y mecánicos del sistema, se ha aplicado una cubierta impermeable de nylon sobre ellos. Este revestimiento de nylon garantiza la integridad y el funcionamiento de los componentes en diversas condiciones ambientales.

### Título del proyecto: Prótesis del dedo pulgar, boceto preliminar 2
Dibujado por: Brayam Joe Lazares Salcedo

<image src ="Imágenes/boceto_2.jpeg">

Lista de despiece

<image src ="Imágenes/despiece_2.jpeg">

Descripción del funcionamiento

El dispositivo incorpora sensores de electromiografía (EMG) situados en los músculos del pulgar abductor largo, flexor corto y flexor largo. Estos sensores envían señales Bluetooh para ser interpretadas por un microprocesador ubicado en la mano derecha. Este último componente, a su vez, controlará los movimientos de la prótesis del pulgar derecho mediante servomotores, mismos que responden al movimiento del pulgar izquierdo. Todo el sistema está integrado a un guante flexible y agradable al tacto.

### Título del proyecto: Prótesis del dedo pulgar, boceto preliminar 3

<image src ="Imágenes/boceto_3.jpg">
<image src ="Imágenes/tabla_3.jpg">

## Tabla de valoración

<image src ="Imágenes/a1.jpg">
<image src ="Imágenes/a2_nuevo.jpeg">

## Proyecto óptimo

<image src ="Imágenes/tabla_final.jpg">

## Conclusión del CS

Se ha optado por la segunda propuesta conceptual como la solución más apropiada. Esta elección se fundamenta en la accesibilidad de ciertos componentes, tales como las baterías, el cargador y/o el sensor, que son de dimensiones reducidas y pueden integrarse de manera eficiente en una prótesis diseñada para el pulgar o su entorno. En resumen, al aprovechar las ventajas de estos componentes en términos de tamaño y disponibilidad, esperamos lograr mejoras significativas en cuanto al tipo de agarre y la fuerza que la mano protésica pueda ejercer.

## Docentes del curso

- Paulo Camilo Alberto Vela Anton
- Renzo Jose Chan Rios
- Umberto Lewis De la Cruz Rodriguez
- Juan Manuel Zuñiga Mamamni
- Jose Alonso Caceres del Aguila
- Andres Arturo Rodriguez De Velasco
- Yeni Varillas Tacza

## Bibliografía 
1. Global Health Data Exchange. Global Burden of Disease [internet]. 2019 [Citado 13 Sep 2023]. Disponible en: https://vizhub.healthdata.org/gbd-results?params=gbd-api-2019-permalink/5ed2741ada3f6d3537da4bec76913a24
2.	Ministerio de Trabajo y Promoción del Empleo. Notificaciones de accidentes de trabajo, incidentes peligrosos y enfermedades ocupacionales BOLETÍN ESTADÍSTICO MENSUAL MARZO 2023 [Internet]. 2023 [citado 30 de agosto de 2023]. Disponible en: https://cdn.www.gob.pe/uploads/document/file/4811002/SAT_MARZO_2023_opt.pdf?v=1688742640
3.	Ministerio de Trabajo y Promoción del Empleo. Notificaciones de accidentes de trabajo, incidentes peligrosos y enfermedades ocupacionales BOLETÍN ESTADÍSTICO MENSUAL ABRIL 2023 [Internet]. 2023 [citado 30 de agosto de 2023]. Disponible en: https://cdn.www.gob.pe/uploads/document/file/4811381/SAT_ABRIL_2023_opt.pdf?v=1688744828
4.	Graham EM, Hendrycks R, Baschuk CM, Atkins DJ, Keizer L, Duncan CC, et al. Restoring Form and Function to the Partial Hand Amputee: Prosthetic Options from the Fingertip to the Palm [Internet]. Vol. 37, Hand Clinics. W.B. Saunders; 2021 [citado 30 de agosto de 2023]. p. 167-87. Disponible en: https://doi.org/10.1016/j.hcl.2020.09.013
5.	Deivasigamani S, Azad A, Yang SS. The Variable Insertional Anatomy of the Abductor Pollicis Longus: Functional Relevance and Relationship to Adjacent Thumb Extensors. Hand [Internet]. 1 de enero de 2023 [citado 30 de agosto de 2023];18(1):145-52. Disponible en: https://journals.sagepub.com/doi/abs/10.1177/1558944721999734
6.	Kaur A, Guan Y. Phantom limb pain: A literature review [Internet]. Vol. 21, Chinese Journal of Traumatology - English Edition. Elsevier B.V.; 2018 [citado 12 de septiembre de 2023]. p. 366-8. Disponible en: https://doi.org/10.1016/j.cjtee.2018.04.006
7.	Bru JLS, Vergara M, Jarque Bou NJ, Aguilar MM, Pérez González A. Asociación Española de Ingeniería Mecánica XIX CONGRESO NACIONAL DE INGENIERÍA MECÁNICA Medición del movimiento de todos los segmentos de la mano mediante videogrametría [Internet]. 2012 [citado 12 de septiembre de 2023]. Disponible en: http://www.xixcnim.uji.es/CDActas/Documentos/ComunicacionesPosters/01-13.pdf
8.	Arias López LA. Biomecánica y patrones funcionales de la mano [Internet]. Vol. 4. 2012 [citado 12 de septiembre de 2023]. Disponible en: https://revistas.unal.edu.co/index.php/morfolia/article/view/31373/31379
9.	van Heijningen VG, Underhill A. User experiences of digital prostheses in daily functioning in people with an amputation of thumb or finger. Journal of Hand Therapy [Internet]. 1 de abril de 2022 [citado 30 de agosto de 2023];35(2):289-98. Disponible en: https://www.jhandtherapy.org/article/S0894-1130(22)00003-5/fulltext
10.	IEEE Engineering in Medicine and Biology Society, Annual International Conference of the IEEE Engineering in Medicine and Biology Society 35 2013.07.03-07 Osaka, EMBC 35 2013.07.03-07 Osaka, EMBS Annual Conference 35 2013.07.03-07 Osaka. 2013 35th annual international conference of the IEEE Engineering in Medicine and Biology Society (EMBC) 3-7 July 2013, Osaka, Japan [Internet]. 2013 [citado 12 de septiembre de 2023]. Disponible en: https://ieeexplore.ieee.org/document/6610858
11.	Taylor CL, Schwarz RJ. The Anatomy and Mechanics of the Human Hand [Internet]. 1955 [citado 12 de septiembre de 2023]. Disponible en: https://www.oandplibrary.org/al/pdf/1955_02_022.pdf
12.	Jan J. Stokosa. Opciones para las prótesis de los miembros. En: Manual MSD. 2021. 
13.	Kieliba P, Clode D, Maimon-Mor RO, Makin TR. Robotic hand augmentation drives changes in neural body representation [Internet]. Vol. 6, Sci. Robot. 2021. Disponible en: https://pubmed.ncbi.nlm.nih.gov/34043536/
14.	Lewin Group T. VA/DoD_Clinical_Practice_Guidelines:_Management_of_Upper_Limb_Amputation_Rehabilitation_Provider_Summary [Internet]. 2022. Disponible en: https://www.healthquality.va.gov/guidelines/Rehab/ULA/VADoDULACPG_ProviderSummary_Final_508.pdf
15.	Lee KH, Kim SJ, Cha YH, Kim JL, Kim DK, Kim SJ. Three-dimensional printed prosthesis demonstrates functional improvement in a patient with an amputated thumb: A technical note. Prosthet Orthot Int [Internet]. 1 de febrero de 2018 [citado 12 de septiembre de 2023];42(1):107-11. Disponible en: https://journals.sagepub.com/doi/epub/10.1177/0309364616679315
16.	Alvial P, Bravo G, Bustos MP, Moreno G, Alfaro R, Cancino R, et al. Quantitative functional evaluation of a 3D–printed silicone-embedded prosthesis for partial hand amputation: A case report. Journal of Hand Therapy. 1 de enero de 2018;31(1):129-36.
17.	Npdevices.com. [citado el 21 de septiembre de 2023]. Disponible en: https://www.npdevices.com/wp-content/uploads/2022/01/GripLock-Finger-Solo-Sheet-English-Dec-20-2021-edge-.pdf
18. Robust A, solution. F. ThumbDriver | 2nd GENERATION [Internet]. Npdevices.com. [citado el 21 de septiembre de 2023]. Disponible en: https://www.npdevices.com/wp-content/uploads/2022/01/GripLock-Finger-Solo-Sheet-English-Dec-20-2021-edge-.pdf
19. Robust A, solution. F. PIPDriver | 2nd GENERATION [Internet]. Npdevices.com. [citado el 21 de septiembre de 2023]. Disponible en: https://www.npdevices.com/wp-content/uploads/2022/01/PIPDriver-Solo-Sheet-English-Dec-20-2021-edge.pdf
20. Gaston, G y Loeffler, B. Prótesis mioeléctrica y método [Patente]. Estados Unidos: 2017. Disponible en: [US10376389B2 - Myoelectric prosthesis and method - Google Patents](https://patents.google.com/patent/US10376389B2/en?q=(amputation+prothesis+thumb)&oq=amputation+or+prothesis+thumb+)
21. Controzzi, Clemente, Cipriani, Carrozza. Prótesis de mano multifuncional y autónoma. [Patente]. España: 2016. Disponible en: https://worldwide.espacenet.com/patent/search?q=pn%3DES2571880T3
22. HOCAOĞLU ÇETİNSOY. Una prótesis de mano. [Patente]. Turkia: 2022. Disponible en: https://worldwide.espacenet.com/patent/search?q=pn%3DWO2022132105A1
23. Qipei, W. Chang, L. Chen, Y. Shanlin, C. Prótesis trans de articulación de muñeca y pulgar impresora 3D. [Patente]. China: 2023. Disponible en: https://worldwide.espacenet.com/patent/search?q=pn%3DCN218652141U
