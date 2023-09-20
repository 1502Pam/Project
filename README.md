# Equipo 12

#### Bienvenidos al repositorio del Equipo 12 del curso Fundamentos de Biodiseño

<image src ="Imágenes/foto_grupal_2.jpg"> 


## Tabla de contenido

- [Roles de los integrantes del proyecto](##Roles_de_los_integrantes_del_proyecto).
- [Análisis del caso](##Análisis_del_caso).
- [Clínica de problemáticas en salud](##Clínica_de_problemáticas_en_salud).
- [Problemática](##Problemática).
- [Estado del arte científico](##Estado_del_arte_científico).
- [Estado del arte comercial](##Estado_del_arte_comercial).
- [Lista de requerimientos](##Lista_de_requerimientos).
- [Propuesta de solución](##Propuesta_de_solución)
- [Docentes del curso](##Docentes_del_curso).
- [Bibliografía](##Bibliografía).


## Roles de los integrantes del proyecto
- Chavez Rivas Allen Stirs (Planificador de la electrónica)
- Lazares Salcedo, Brayam Joe (Planificador de diseño de los planos del prototipo)
- Llanos Florian Dhiago Gustavo (Coordinador del grupo y planificador de manufactura digital)
- Medina Burga Yuliana Abigail (Planificador del modelado 3D del prototipado)
- Sanchez Valverde Mariel Linette (Planificador de programación)
- Vilchez Cotrina Pamela Nicole (Planificador del repositorio Github)


## Análisis del caso clínico

### A) Contexto

Según Global Burden of Disease (GBD) <sup>[#1]</sup>, existe una prevalencia mundial de amputaciones cercana a 500 millones de personas en el período 1990 y 2019.

<image src ="Imágenes/1S.jpg"> 

En el Perú, existe una prevalencia de 400 mil personas con amputaciones de dedo en el período 1990-2019; además, según el Boletín Estadístico Mensual de Notificaciones de accidentes de Trabajo, Incidentes Peligrosos y Enfermedades Ocupacionales, durante el mes de abril del 2023, se reportaron 2390 personas que sufrieron accidentes de trabajo, destacando los siguientes datos (2): 

#### Tabla de elaboración propia 1

| Accidentes de trabajo | Especificación | Cantidad de personas afectadas | Fecha de registro de datos |
| ------------- | ------------- | ------------- | -------------- |
| Agente causante  | Generador de energía excepto motores eléctricos | 10 | Marzo 2023 |
|   | Contacto con la corriente eléctrica  | 13 | Marzo 2023 |
| Naturaleza de la lesión | Amputación | 20 | Marzo 2023 |
| Parte del cuerpo afectada | Dedos de la mano | 411 | Abril 2023 |
|  | Mano (excepción de los dedos solos) | 139 | Abril 2023 |
| Naturaleza de la lesión | Amputación | 13 | Abril 2023 |
| Agente causante | Instalaciones eléctricas, incluidos los motores eléctricos pero con exclusión de las herramientas eléctricas manuales | 1 | Abril 2023 |

En el mes indicado, 411 personas sufrieron de amputaciones de dedos, lo que quiere decir que, en aproximadamente 137 casos, el pulgar fue amputado. Este dato es muy significante, puesto que la amputación del pulgar resulta en una pérdida del 40% de las funciones de la mano y en un 22% de la función total de la persona (3, 4).


### B) Consecuencias de un pulgar amputado

#### 1. Síndrome del miembro fantasma
   
Perder una parte del cuerpo desencadena una serie de consecuencias funcionales psicológicas y fisiológicas (5); de hecho, la consecuencia más común y conocida es el síndrome del miembro fantasma. Entre un 60-80% de los usuarios amputados experimentan sensación de dolor del miembro fantasma, donde el 95% de estos reportan experimentar dolor en las primeras semanas posteriores a la amputación y el 60-70% después de un año de la amputación (6).

##### Tabla de elaboración propia 2

| Clasificación de la sensación de dolor | Descripción |
|-----------|------------|
| Dolor en el miembro residual  | Percepción dolorosa en el segmento no amputado |
| Sensación fantasma | Percepción no dolorosa del segmento amputado |
| Dolor del miembro fantasma | Percepción dolorosa en el segmento amputado |

Por otro lado, existen factores fundamentales que determinan la sensación de dolor:

##### Tabla de elaboración propia 3
| Factores |  | Descripción |
|-----------|------------|-------|
| Factores periféricos  | Actividad de los nervios residuales | Se presenta degeneración retrógrada y acortamiento de las neuronas aferentes, las cuales generan neuromas que incrementan la sensibilización a los estímulos |
| Factores centrales | Plasticidad espinal | Posterior a la lesión de un nervio periférico, las neuronas del cuerno posterior de la médula espinal muestran sensibilización central; es decir, estímulos nociceptivos de corta duración generan potenciales postsinápticos aumentados durante un largo período de tiempo.|
| | Reorganización cortical | Las áreas neuronales adyacentes de la zona cortical que representaba el miembro amputado, presenta cambios de neuroplasticidad sobre la corteza motora primaria (7) y somatosensorial primaria (7). | 

Por tales factores, el miembro fantasma depende de muchos cambios neurológicos causados por un cambio drástico en la anatomía del miembro amputado. En el caso del pulgar, estos cambios podrían variar o ser más complejos debido al rol del pulgar en la anatomía y fisiología de la mano.

#### 2. Merma del movimiento de la mano

El movimiento de la mano tiene un total de 25 grados de libertad (GDL) y se describe en el campo biomecánico por un conjunto de ángulos de rotación fisiológicos __(figura 1)__: flexión/extensión (F/E), abducción/aducción (Ab/Ad) y pronación/supinación (P/S) (8).

<image src ="Imágenes/1M_n.jpeg"> 

Además, el movimiento de la mano es producido por los músculos extrínsecos e intrínsecos, destacando a este último por su ubicación en la región de la muñeca y por la produccción de los movimientos del pulgar: abducción, aducción, flexión y oposición (9).
Cabe resaltar que la articulación del pulgar funciona básicamente con dos GDL predominantes (F/E y Ab/Ad); sin embargo, al amputarse este miembro, se pierden todos los movimientos del pulgar, mermando así los ángulos de rotación de la mano.

#### 3. Pérdida de los agarres de fuerza

Los agarres de fuerza crean patrones motores y señales nerviosas que originan el movimiento que deseamos. De esta manera, cuando la amputación se da en el pulgar, se desencadenan problemas como la hiperestesia (4) y la pérdida de agarre de fuerza, el cual se clasifica en cilíndrico, esférico, gancho, precisión, palmar y lateral (5, 10).

<image src ="Imágenes/3M_n.jpeg"> 


### C) Alternativas de solución actuales ante la amputación de un miembro

En la actualidad, la mejor forma de adaptarse a realizar las mismas actividades de trabajo tras una amputación es a través del uso de una prótesis, puesto que está asociada con la disminución en la sensación del miembro fantasma y dolor en el miembro residual (11). Además, la fuerza desproporcionada en los miembros residuales se trabaja con rutinas de terapia, con el fin de enseñar al usuario a mantener las articulaciones en la posición adecuada (12).

Para ello, existen 4 técnicas que permiten el ajuste del posicionamiento de una prótesis con el muñón (5): al vacío, correas, succión e interfaz con traba. Dependiendo del tipo de movimiento y situación del usuario, se suelen fusionar con almohadillas de gel y medias protésicas. No obstante, este posicionamiento también puede depender del tipo de prótesis y sus diferentes funcionalidades (12, 13, 14):

#### Tabla de elaboración propia 4

| Prótesis | Descripción | Tasa de abandono |
| ------------- | ------------- | ------------- |
| Prótesis funcional pasiva | - Aumenta la longitud digital. - Restaura la cosmosis y mejora el desempeño general de la mano. - Suelen estar hechos de silicona | 100% |
| Prótesis impulsadas por el cuerpo (Body-Powered) | - Aprovechan la anatomía restante de la amputación. - Independientes de baterías externas o electricidad. - Sincrónico con movimientos naturales de la mano. - Limitaciones cosméticas (alto grado de mantenimiento y peso excesivo) | 80-85% |
| Prótesis impulsadas externamente (Externally-Powered) | - Ideales para amputaciones trans-metacarpianas. - Destacan las mioeléctricas (MYO) que registran señales de electromiografía de superficie. - Logra posturas de agarre de forma independiente y sincronizada. | 75% |
| Prótesis para actividades específicas | - Destinadas a varios tipos de amputaciones. - Limitación a una única función a suplir. - Preferido como herramienta de asistencia en lugar de reemplazo del bro amputado | |

Sin embargo, la principal razón para el abandono de estos cuatro tipos de prótesis es el precio, el cual puede llegar a ser entre 5000 a 12000 dólares; por consiguiente, siendo poco asequible para muchos usuarios amputados. Pese a ello, la manufactura aditiva es el último avance en el campo del diseño protésico, pues es capaz de fabricar prótesis de bajo costo y menor peso. La característica principal de esta es su tecnología de fabricación aditiva, donde los productos son construidos agregando capa por capa en una placa de construcción para producir el producto final; otorgando como principal ventaja la capacidad de proporcionar una alta relación resistencia-peso a través de un relleno configurable (9).


## Clínica de problemáticas en salud

El usuario presenta sensación de miembro fantasma y dolor persistente; por tal motivo, es necesario tomar medidas para fortalecer la musculatura residual y favorecer actividades uni/bimanuales para facilitar sus actividades de vida diarias.

Además, existen diversos problemas de los miembros inferiores en la amputación transtibial: marcha compensada, alteración sensorial táctil y dificultad para reconocer un adecuado punto de apoyo. 

Por otro lado, en cuanto a los miembros superiores, se distinguen las siguientes dificultades tras la amputación transmetacarpiana y desarticulación interfalángica proximal del dedo medio: dolor palpable a nivel de musculatura interósea y lumbricales, control inadecuado de la presión palmar, movimiento mínimo del músculo oponente del pulgar y fuerza de presión disminuída.

## Problemática

Hay una deficiencia de prótesis de pulgar especializados en el agarre de fuerza para personas que buscan la inserción laboral en el Perú.

## Estado del arte científico
1. El tercer pulgar (15)

Se llevó a cabo una investigación orientada a determinar la viabilidad de alcanzar una mejora motora exitosa mediante la adición de un pulgar robótico suplementario, y a su vez, explorar las implicaciones que ello conlleva tanto en la representación neuronal como en la funcionalidad de la mano biológica. 
Para ello, los voluntarios fueron sometidos a un entrenamiento específico para operar un pulgar robótico adicional, denominado "Tercer Pulgar", durante un período de cinco días. Se abordaron situaciones cotidianas no estructuradas y  entornos de laboratorio, además los participantes fueron sometidos a una serie de evaluaciones que abarcan pruebas de imágenes cerebrales y de comportamiento con el propósito de indagar en la representación de la mano amplificada antes y después del período de entrenamiento. 
Los resultados revelaron notables avances en términos del control motor del tercer pulgar,  destreza, coordinación entre la mano-dispositivo y “encarnación”. Sin embargo, es importante destacar que el empleo del tercer pulgar generó una reducción en las sinergias cinemáticas naturales presentes en la mano biológica. Adicionalmente, a través de la decodificación de las señales cerebrales, se identificó una ligera alteración en la representación motora del miembro amplificado tras el periodo de entrenamiento, inclusive en momentos en los cuales el tercer pulgar no era empleado activamente. Estas ramificaciones neurocognitivas revisten vital importancia para el exitoso desarrollo de futuras tecnologías de amplificación.

<image src ="Imágenes/tercer_pulgar.jpg"> 

2. Three-dimensional printed prosthesis demonstrates functional improvement in a patient with an amputated thumb: A technical note (16)

Se creó una prótesis personalizada a un hombre de 67 años con una amputación del pulgar derecho por encima de la articulación metacarpofalángica. Para la prótesis se escanearon las manos del usuario y se procedió a imprimir en 3D la prótesis del pulgar derecho con un elastómero termoplástico flexible, todo en un lapso de 48 horas y a un costo de $50. Posteriormente, se evaluó el producto mediante el Test de Función de la Mano Jebsen-Taylor y el Test de Bloques y Cajas. Los resultados de satisfacción del usuario fueron “muy satisfechos” y se reportó gran facilidad para actividades cotidianas al emplear la prótesis.

<image src ="Imágenes/4B.png"> 

3. Evaluación funcional cuantitativa de una prótesis impresa en 3D con silicona incrustada para la amputación parcial de la mano: un informe de caso (17)
   
El estudió se centró en un usuario masculino con una amputación parcial de la mano no dominante. A modo de solución, se diseñaron dos prótesis en cuyo proceso de diseño fue crucial la retroalimentación del usuario para crear un producto que ayude al usuario en sus actividades laborales. Estas prótesis personalizadas e impresas en 3D con silicona incrustada fueron evaluadas utilizando el Test de Función de la Mano Jebsen; mediante el cual se observó que, un diseño de prótesis más simple (prótesis 2) fue más útil y robusto que uno sofisticado (prótesis 1). Por otro lado, el estudio destaca el potencial de las prótesis impresas en 3D e importancia de la personalización para mejorar la calidad de vida de personas con amputaciones parciales de la mano.

<image src ="Imágenes/2B.png"> 

## Estado del arte comercial

### A) Equipos o dispositivos existentes en el mercado

|| Dispositivos existentes en el mercado ||
| ------------- | ------------- |------------- |
| GripLock Finger | THUMBDriver | PIPDriver |
| <image src ="Imágenes/griplock.png"> | <image src ="Imágenes/thumbdriver.png"> | <image src ="Imágenes/PIPdriver.png"> |
| Dedo protésico para la falange media, de bloqueo pasivo y posicionable, diseñado para ser laminado en un encaje parcial de. Está diseñado para soportar con firmeza más de 90.71kg en agarre de gancho. | Diseñado para la falange proximal del pulgar. Al igual que el MCP driver este dispositivo se acciona mediante una articulación MCP (metacarpofalángica), pero especialmente en actividades para el pulgar. Gracias al diseño el dispositivo se adapta a las necesidades del usuario, esto facilita la realización de pellizco y agarre.|Diseñada para extremidades parciales y dedos en la falange media o distal. Su diseño se adapta a las articulaciones PIP (distal interfalángica) y DIP (proximal interfalángica). Acciona mediante una articulación PIP intacta con suficiente residuo para encajar la jaula. Esto hace que la estructura en forma de jaula proteja el residuo(muñón). |
| *Materiales: nylon 12 (medical grade), silicona, aluminio 7075-T6 *Resistencia al calor: nylon 175 C, silicona 204.4C | *Materiales: nylon 12 (medical grade), silicona, stainless 316, titanio *Resistencia al calor: nylon 175 C, silicona 204.4C *Resistencia a la tensión del anillo: 36.28kg | *Materiales: nylon 12(grado médico), silicona, titanio *Resistencia al calor: nylon 175 C, silicona 204.4C *Resistencia al aplastamiento: mayor a 27.22kg |




### B) Patentes de invención y Patentes de modelo de utilidad

|| Invención|| Utilidad |
| ------------- | ------------- |------------- |---------- |
| Prótesis mioeléctrica y método (1Y)	| Prótesis de mano multifuncional y autónoma (2Y)	| Una prótesis de mano (3Y)	| Prótesis trans de articulación de muñeca y pulgar impresora 3D (4Y) |
| <image src ="Imágenes/protesis_mioeléctrica.png"> | <image src ="Imágenes/protesis_multifuncional.png"> | <image src ="Imágenes/protesis_mano.png"> | <image src ="Imágenes/protesis_trans.png"> |
| Gaston y Loeffler -Estados Unidos (2017). Es una próstesis de trasferencia de señales con electrodos, describe con exactitud la conexión de cada uno de los nervios que generan el movimiento de los músculos en la mano. Utiliza microprocesadores multicanal, entradas EMG, motores, etc., es el mayor avance para las prótesis mioeléctricas. El ensamblado al paciente es un método quirúrgico. | Controzzi, Clemente, Cipriani, Carrozza - España (2016). Prótesis de mano que permite la rotación, abducción y flexión del dedo, a partir de un sistema eléctrico y árbol motor rotativo que están programados para el movimiento restringido, a partir del análisis del movimiento angular. Utilizan el mecanismo rotativo de cruz de malta y una línea de trasmisión del movimiento. | HOCAOĞLU ÇETİNSOY – Turkia (2022). Se utiliza señales electromiografías de superficie y polímeros que tiene memoria elástica y que cambian su rigidez dependiendo de factores externos. Dividen la estructura tres huesos con poleas y calentadores. EL movimiento lo generan motores DC de control, no se utiliza ningún tipo de algoritmo, es de bajo costo, gran adaptabilidad al amputado, lo que reduce el tiempo de rehabilitación. | Wei Qipei; Liu Chang; Yang Chen; Chen Shanlin – China (2023). A otras modelos de prótesis 3D se incluye una bola, tapa y varilla metacarpiana que se conectan por rosca con los otros huesos y la varilla se coloca en una posición alejada mejorando el uso técnico de la prótesis. Utiliza materiales como polietileno, cromo de cobalto, aleación de aluminio biológicamente compatibles. |


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
Pulgar mioeléctrico protésico diseñado para restaurar la fuerza de agarre, permitiendo la realización de movimientos esenciales con el fin de lograr una reintegración laboral óptima.

## Docentes del curso

- Paulo Camilo Alberto Vela Anton
- Renzo Jose Chan Rios
- Umberto Lewis De la Cruz Rodriguez
- Juan Manuel Zuñiga Mamamni
- Jose Alonso Caceres del Aguila
- Andres Arturo Rodrigo de Velasco
- Yeni Varillas Tacza

## Bibliografía 
#1 1. Global Health Data Exchange. Global Burden of Disease [internet]. 2019 [Citado 13 Sep 2023]. Disponible en: https://vizhub.healthdata.org/gbd-results?params=gbd-api-2019-permalink/5ed2741ada3f6d3537da4bec76913a24
2. Ministerio de Trabajo y Promoción del Empleo. Notificaciones de accidentes de trabajo, incidentes peligrosos y enfermedades ocupacionales BOLETÍN ESTADÍSTICO MENSUAL MARZO 2023 [Internet]. 2023 [citado 30 de agosto de 2023]. Disponible en: https://cdn.www.gob.pe/uploads/document/file/4811002/SAT_MARZO_2023_opt.pdf?v=1688742640
3. Ministerio de Trabajo y Promoción del Empleo. Notificaciones de accidentes de trabajo, incidentes peligrosos y enfermedades ocupacionales BOLETÍN ESTADÍSTICO MENSUAL ABRIL 2023 [Internet]. 2023 [citado 30 de agosto de 2023]. Disponible en: https://cdn.www.gob.pe/uploads/document/file/4811381/SAT_ABRIL_2023_opt.pdf?v=1688744828
4. Graham EM, Hendrycks R, Baschuk CM, Atkins DJ, Keizer L, Duncan CC, et al. Restoring Form and Function to the Partial Hand Amputee: Prosthetic Options from the Fingertip to the Palm [Internet]. Vol. 37, Hand Clinics. W.B. Saunders; 2021 [citado 30 de agosto de 2023]. p. 167-87. Disponible en: https://doi.org/10.1016/j.hcl.2020.09.013
5. Deivasigamani S, Azad A, Yang SS. The Variable Insertional Anatomy of the Abductor Pollicis Longus: Functional Relevance and Relationship to Adjacent Thumb Extensors. Hand [Internet]. 1 de enero de 2023 [citado 30 de agosto de 2023];18(1):145-52. Disponible en: https://journals.sagepub.com/doi/abs/10.1177/1558944721999734
6. Kaur A, Guan Y. Phantom limb pain: A literature review [Internet]. Vol. 21, Chinese Journal of Traumatology - English Edition. Elsevier B.V.; 2018 [citado 12 de septiembre de 2023]. p. 366-8. Disponible en: https://doi.org/10.1016/j.cjtee.2018.04.006
7. Bru JLS, Vergara M, Jarque Bou NJ, Aguilar MM, Pérez González A. Asociación Española de Ingeniería Mecánica XIX CONGRESO NACIONAL DE INGENIERÍA MECÁNICA Medición del movimiento de todos los segmentos de la mano mediante videogrametría [Internet]. 2012 [citado 12 de septiembre de 2023]. Disponible en: http://www.xixcnim.uji.es/CDActas/Documentos/ComunicacionesPosters/01-13.pdf
8. Arias López LA. Biomecánica y patrones funcionales de la mano [Internet]. Vol. 4. 2012 [citado 12 de septiembre de 2023]. Disponible en: https://revistas.unal.edu.co/index.php/morfolia/article/view/31373/31379
9. van Heijningen VG, Underhill A. User experiences of digital prostheses in daily functioning in people with an amputation of thumb or finger. Journal of Hand Therapy [Internet]. 1 de abril de 2022 [citado 30 de agosto de 2023];35(2):289-98. Disponible en: https://www.jhandtherapy.org/article/S0894-1130(22)00003-5/fulltext
10. IEEE Engineering in Medicine and Biology Society, Annual International Conference of the IEEE Engineering in Medicine and Biology Society 35 2013.07.03-07 Osaka, EMBC 35 2013.07.03-07 Osaka, EMBS Annual Conference 35 2013.07.03-07 Osaka. 2013 35th annual international conference of the IEEE Engineering in Medicine and Biology Society (EMBC) 3-7 July 2013, Osaka, Japan [Internet]. 2013 [citado 12 de septiembre de 2023]. Disponible en: https://ieeexplore.ieee.org/document/6610858
11. Taylor CL, Schwarz RJ. The Anatomy and Mechanics of the Human Hand [Internet]. 1955 [citado 12 de septiembre de 2023]. Disponible en: https://www.oandplibrary.org/al/pdf/1955_02_022.pdf
12. Jan J. Stokosa. Opciones para las prótesis de los miembros. En: Manual MSD. 2021. https://www.msdmanuals.com/es-pe/professional/temas-especiales/miembro-prot%C3%A9sico/opciones-para-las-pr%C3%B3tesis-de-los-miembros
13. Kieliba P, Clode D, Maimon-Mor RO, Makin TR. Robotic hand augmentation drives changes in neural body representation [Internet]. Vol. 6, Sci. Robot. 2021. Disponible en: https://www.science.org
14. Lewin Group T. VA/DoD_Clinical_Practice_Guidelines:_Management_of_Upper_Limb_Amputation_Rehabilitation_Provider_Summary [Internet]. 2022. Disponible en: www.tricare.mil 
15. Kieliba P, Clode D, Maimon-Mor RO, Makin TR. Robotic hand augmentation drives changes in neural body representation [Internet]. Vol. 6, Sci. Robot. 2021. Disponible en: https://www.science.org
16. Lee KH, Kim SJ, Cha YH, Kim JL, Kim DK, Kim SJ. Three-dimensional printed prosthesis demonstrates functional improvement in a patient with an amputated thumb: A technical note. Prosthet Orthot Int [Internet]. 1 de febrero de 2018 [citado 12 de septiembre de 2023];42(1):107-11. Disponible en: https://journals.sagepub.com/doi/epub/10.1177/0309364616679315
17. Alvial P, Bravo G, Bustos MP, Moreno G, Alfaro R, Cancino R, et al. Quantitative functional evaluation of a 3D–printed silicone-embedded prosthesis for partial hand amputation: A case report. Journal of Hand Therapy. 1 de enero de 2018;31(1):129-36. 
