# Equipo 12

Bienvenidos al repositorio del Equipo 12 del curso Fundamentos de Biodiseño

Proyecto: Prótesis para amputación transmetacarpiana del dedo pulgar

## Tabla de contenido

- [Roles de los integrantes del proyecto](##Roles_de_los_integrantes_del_proyecto).
- [Análisis del caso](##Análisis_del_caso).
- [Clínica de problemáticas en salud](##Clínica_de_problemáticas_en_salud).
- [Problemática](##Problemática).
- [Estado del arte científico](##Estado_del_arte_científico).
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

Según Global Health Data Exchange, durante el año 2019 existieron más de 160 millones de personas mayores de 25 años que presentaron amputaciones de dedos (exceptuando al pulgar) y más de 90 millones las presentaron en el pulgar. Además, los casos de incidencia en las amputaciones de las partes anteriormente mencionadas se ven incrementados cada año (1S). /INSERTE IMAGEN STIRS/

En el Perú, según el Boletín Estadístico Mensual de Notificaciones de accidentes de Trabajo, Incidentes Peligrosos y Enfermedades Ocupacionales, durante el mes de abril del 2023, se reportaron 2390 personas que sufrieron accidentes de trabajo, destacando los siguientes datos (1): 

### Tabla de datos

| Accidentes de trabajo | Especificación | Cantidad de personas afectadas | Fecha de registro de datos |
| ------------- | ------------- | ------------- | -------------- |
| Agente causante  | Generador de energía excepto motores eléctricos | 10 | Marzo 2023 |
|   | Contacto con la corriente eléctrica  | 13 | Marzo 2023 |
| Naturaleza de la lesión | Amputación | 20 | Marzo 2023 |
| Parte del cuerpo afectada | Dedos de la mano | 411 | Abril 2023 |
|  | Mano (excepción de los dedos solos) | 139 | Abril 2023 |
| Naturaleza de la lesión | Amputación | 13 | Abril 2023 |
| Agente causante | Instalaciones eléctricas, incluidos los motores eléctricos pero con exclusión de las herramientas eléctricas manuales | 1 | Abril 2023 |


Entre un 60-80% de los pacientes amputados experimentan sensación de dolor del miembro fantasma, donde el 95% de estos reportan experimentar dolor en las primeras semanas posteriores a la amputación y el 60-70% después de un año de la amputación. (1P). Aquella sensación de dolor puede ser clasificada en (2P): /INSERTE TABLA/



Por otro lado, existen dos factores fundamentales que determinan la sensación de dolor del miembro fantasma (3P): /HACER TABLA/



En la mano existen dos tipos de músculos clasificados por su origen y terminación (1D). /HACER TABLA DE DHIAGO/



El movimiento de la mano tiene un total de 25 grados de libertad, y suele describirse en los campos clínico y biomecánico por un conjunto de ángulos de rotación fisiológicos (figura 1): flexión/extensión (F/E), abducción/aducción (Ab/Ad) y pronación/supinación (P/S) (1M). /INSERTE IMAGEN/



Para nuestra investigación es relevante resaltar que la articulación del pulgar funciona básicamente con dos GDL predominantes (F/E y Ab/Ad). Sin embargo, aún no se conoce de ningún método que permita la medición simultánea de los 25 grados de libertad de la mano en movimiento en términos de ángulos de rotación fisiológicos (2M).


La fuerza y la precisión crean patrones motores y señales nerviosas que originan el movimiento que deseamos. Por tal motivo, después de una amputación, la fuerza desproporcionada en los miembros se trabaja con rutinas de terapia, con el fin de enseñar al paciente a mantener las articulaciones en la posición adecuada (2). Por las estadísticas mostradas, las amputaciones de mano parcial varían desde un solo dedo o múltiples dedos hasta amputaciones carpometacarpianas. La prensión y la oposición a menudo se pueden lograr si se oponen, de alguna manera, los dedos naturales y los protésicos (3). De esta manera, cuando la amputación se da en los dedos de la mano desencadena problemas como la hiperestesia (4) y la pérdida de fuerza de agarre, el cual se clasifica en cilíndrico, esférico, gancho, precisión, palmar y lateral (5, 3M). /INSERTE IMAGEN/

En primer lugar, una amputación del pulgar puede resultar en una pérdida del 40% de las funciones de la mano y en un 22% de la función total de la persona (6, 7), puesto que afecta directamente a los músculos abductor corto, flexor corto y aductor corto; los cuales son de suma importancia para el movimiento palmar de la mano y el agarre de objetos en múltiples posiciones (8).

En segundo lugar, las amputaciones proximales a las falanges medias de los dedos pueden disminuir la fuerza de agarre y limitar el agarre en pinza y en otros movimientos motores finos. En el caso del dedo medio, el músculo afectado es el lumbrical (6). 

Si bien adaptarse a realizar las mismas actividades de trabajo con los dedos perdidos no es imposible, es más fácil y tiene una mayor probabilidad de éxito el usar una prótesis, puesto que está asociada con la disminución en la sensación del miembro fantasma y dolor en el miembro residual (6). Respecto al posicionamiento de una prótesis, existen 4 técnicas que permiten el ajuste de esta con el muñón: al vacío, correas, succión e interfaz con traba. Dependiendo del tipo de movimiento y situación del paciente, se suelen fusionar con almohadillas de gel y medias protésicas.

Por otro lado, existen 4 tipos de prótesis con diferentes funcionalidades (6, 9, 10).
### Tabla de tipos de prótesis con diferentes funcionalidades

| Prótesis | Descripción | Tasa de abandono |
| ------------- | ------------- | ------------- |
| Prótesis funcional pasiva | - Aumenta la longitud digital. - Restaura la cosmosis y mejora el desempeño general de la mano. - Suelen estar hechos de silicona | 100% |
| Prótesis impulsadas por el cuerpo (Body-Powered) | - Aprovechan la anatomía restante de la amputación. - Independientes de baterías externas o electricidad. - Sincrónico con movimientos naturales de la mano. - Limitaciones cosméticas (alto grado de mantenimiento y peso excesivo) | 80-85% |
| Prótesis impulsadas externamente (Externally-Powered) | - Ideales para amputaciones trans-metacarpianas. - Destacan las mioeléctricas (MYO) que registran señales de electromiografía de superficie. - Logra posturas de agarre de forma independiente y sincronizada. | 75% |
| Prótesis para actividades específicas | - Destinadas a varios tipos de amputaciones. - Limitación a una única función a suplir. - Preferido como herramienta de asistencia en lugar de reemplazo del bro amputado | |


Sin embargo, la principal razón para el abandono de estos cuatro tipos de prótesis es el precio, el cual puede llegar a ser entre 5000 a 12000 dólares; por consiguiente, siendo poco asequible para muchos pacientes amputados.
Por ello, la impresión 3D es el último avance en el campo del diseño protésico, pues es capaz de fabricar prótesis de bajo costo y menor peso. La característica principal de esta es su tecnología de fabricación aditiva, donde los productos son construidos agregando capa por capa en una placa de construcción para producir el producto final; otorgando como principal ventaja la capacidad de proporcionar una alta relación resistencia-peso a través de un relleno configurable (9).


## Clínica de problemáticas en salud

Teniendo en cuenta el caso clínico presentado, se menciona que el usuario presenta sensación de bro fantasma y dolor persistente, asimismo se ve necesario tomar medidas para fortalecer la musculatura residual y favorecer actividades uni/bimanuales para facilitar sus actividades de vida diarias.

Además, logramos identificar los siguientes problemas de MMII en la amputación transtibial: marcha compensada, alteración sensorial táctil y dificultad para reconocer un adecuado punto de apoyo. 

Por otro lado, en cuanto a los MMSS, la amputación transmetacarpiana y desarticulación interfalángica proximal del dedo medio distinguimos las siguientes dificultades: dolor palpable a nivel de musculatura interósea y lumbricales, control inadecuado de la presión palmar, movimiento mínimo del músculo oponente del pulgar y fuerza de presión disminuída.

## Problemática

Hay una deficiencia de prótesis de pulgar especializados en el agarre para personas que buscan la inserción laboral en el Perú.

## Estado del arte científico
1. El tercer pulgar (11)

Se llevó a cabo una investigación orientada a determinar la viabilidad de alcanzar una mejora motora exitosa mediante la adición de un pulgar robótico suplementario, y a su vez, explorar las implicaciones que ello conlleva tanto en la representación neuronal como en la funcionalidad de la mano biológica. 
Para ello, los voluntarios fueron sometidos a un entrenamiento específico para operar un pulgar robótico adicional, denominado "Tercer Pulgar", durante un período de cinco días. Se abordaron situaciones cotidianas no estructuradas y  entornos de laboratorio, además los participantes fueron sometidos a una serie de evaluaciones que abarcan pruebas de imágenes cerebrales y de comportamiento con el propósito de indagar en la representación de la mano amplificada antes y después del período de entrenamiento. 
Los resultados revelaron notables avances en términos del control motor del tercer pulgar,  destreza, coordinación entre la mano-dispositivo y “encarnación”. Sin embargo, es importante destacar que el empleo del tercer pulgar generó una reducción en las sinergias cinemáticas naturales presentes en la mano biológica. Adicionalmente, a través de la decodificación de las señales cerebrales, se identificó una ligera alteración en la representación motora del miembro amplificado tras el periodo de entrenamiento, inclusive en momentos en los cuales el tercer pulgar no era empleado activamente. Estas ramificaciones neurocognitivas revisten vital importancia para el exitoso desarrollo de futuras tecnologías de amplificación.

2. Muscle Finger - Open source (12)

Open muscle finger es una fuente abierta desarrollada por TurfptaX con elementos eléctricos muy básicos y accesibles. Donde a partir del uso de 12 sensores que se ubican el brazo desencadena el movimiento de los dedos protésicos, todo esto a partir de un código en Machine learning qué colección y procesa los datos de manera automática. Las ventajas son la disponibilidad y adaptabilidad para el público; sin embargo, aún se sigue trabajando en la cosmesis del hardware. 

3. Brazalete EMG (13)
   
El brazalete EMG para el control de movimiento de una prótesis de mano prototipo tiene un diseño mecánico que se basa en una mano de seis grados de libertad de código abierto con modificaciones propuestas en los dispositivos de accionamiento y transmisión de energía para reducir los costos del prototipo y proporcionar una mayor movilidad al pulgar para adaptar el movimiento a la forma del objeto agarrado. A diferencia de prototipos similares, se utiliza un sistema de hardware portátil basado en la arquitectura maestro/esclavo en lugar de una PC para la adquisición y procesamiento de los datos EMG. 
El dispositivo maestro propuesto es un subsistema basado en Raspberry Pi interfaz con el brazalete EMG para recopilar y clasificar información de la actividad muscular del usuario. Por otro lado, el dispositivo esclavo es un subsistema basado en microcontrolador ATmega328 que define los movimientos de la mano robótica a partir de la información recopilada y procesada por el dispositivo maestro. 

De ello se obtuvieron resultados experimentales para evaluar el rendimiento de la prótesis de mano controlada por EMG realizando diferentes tipos de tareas de agarre y se confirmó que era funcional y mucho más barato que otros en el mercado (612.10 US dólares a comparación de 2991.65 dólares).

## Docentes del curso

- Paulo Camilo Alberto Vela Anton
- Renzo Jose Chan Rios
- Umberto Lewis De la Cruz Rodriguez
- Juan Manuel Zuñiga Mamamni
- Jose Alonso Caceres del Aguila
- Andres Arturo Rodrigo de Velasco
- Yeni Varillas Tacza

## Bibliografía 
 1. Ministerio de Trabajo y Promoción del Empleo. Notificaciones de accidentes de trabajo, incidentes peligrosos y enfermedades ocupacionales. 2023. Boletín estadístico Mensual Marzo 2023. Disponible en: https://cdn.www.gob.pe/uploads/document/file/4811002/SAT_MARZO_2023_opt.pdf?v=1688742640 
 2. Ministerio de Trabajo y Promoción del Empleo. Notificaciones de accidentes de trabajo, incidentes peligrosos y enfermedades ocupacionales. Abril 2023. Boletín estadístico mensual abril 2023. Disponible en: https://cdn.www.gob.pe/uploads/document/file/4811381/SAT_ABRIL_2023_opt.pdf?v=1688744828 
 3. Stokosa J. Opciones para las prótesis de los miembros [internet]. Manual MSD, 2021 [Citado 31 Agosto 2023]. Disponible en: https://www.msdmanuals.com/es-pe/professional/temas-especiales/miembro-prot%C3%A9sico/opciones-para-las-pr%C3%B3tesis-de-los-miembros
 4. Heijningen G. & Underhill A. User experiences of digital prostheses in daily functioning in people with an amputation of thumb or finger [internet]. Journal of Hand Therapy, 2022 [Citado 31 Agosto 2023]; 35(2): p. 289-298. Disponible en: https://www.sciencedirect.com/science/article/pii/S0894113022000035
 5. Sapsanis C., Georgoulas G., Tzes A. & Lymberopoulos D. Improving EMG based classification of basic hand movements using EMD. IEEE,  35th Annual International Conference of the IEEE Engineering in Medicine and Biology Society (EMBC), 2013 [Citado 31 Agosto 2023]. pp. 5754 - 5757. Disponible en: https://ieeexplore.ieee.org/document/6610858
 6. Graham E., Hendrycks R.,  Baschuk M., Atkins J., Keizer L., Duncan C. & Mendenhall D. Restoring Form and Function to the Partial Hand Amputee [internet]. Hand Clinics, 2021 [Citado 31 Agosto 2023]; 37(1): p. 167–187. Disponible en: https://sci-hub.se/10.1016/j.hcl.2020.09.013
 7. A. Swanson, C. Hagert, G. Swanson, Evaluation of impairment of hand function, The Journal of Hand Surgery, 8 (1983) 709-722. https://doi.org/10.1016/S0363-5023(83)80253-6 [accessed on 21.09.2018].  
 8. Deivasigamani S., Azad A. & Yang S. The Variable Insertional Anatomy of the Abductor Pollicis Longus: Functional Relevance and Relationship to Adjacent Thumb Extensors [internet]. Sage Journals, 2021 [Citado 31 Agosto 2023]; 18(1). Disponible en: https://journals.sagepub.com/doi/abs/10.1177/1558944721999734
 9. Kumarage K., Wickramarathna H., Vijesundaram M., Vijendran M., Rathnakumar N., & Thanihaichelvan T. Design and experimental validation of an optimized wrist powered 3D printed mechanical transmetacarpal prosthesis [internet]. 2019 IEEE 14th Conference on Industrial and Information Systems (ICIIS), 2019 [Citado 31 Agosto 2023]. Disponible en: https://sci-hub.se/10.1109/iciis47346.2019.9063259
 10. Department of  Veteran Affairs. VA/DoD Clinical practice guideline for the management of upper limb amputation rehabilitation. Estados Unidos, 2022 [Citado 31 Agosto 2023]. Disponible en: https://www.healthquality.va.gov/guidelines/Rehab/ULA/VADoDULACPG_ProviderSummary_Final_508.pdf
 11. Kieliba P., Clode D., Maimon-Mor R. & Makin T. Robotic hand augmentation drives changes in neural body representation [internet]. ScienceRobotics, 12 May 2021 [Citado 31 Ago 2023]; 6(54). Disponible en: https://www.science.org/doi/10.1126/scirobotics.abd7935
 12. Hackaday.io. Open Muscle Finger Tracking Sensor [internet]. Disponible en: https://hackaday.io/project/187922/logs
 13. Sánchez L., Montiel M., Guzmán E. & Gonzáles E. A Low-Cost EMG-Controlled Anthropomorphic Robotic Hand for Power and Precision Grasp [internet]. Biocybernetics and Biomedical Engineering, 2020 [Citado 31 Agosto 2023]; 40(1): p. 221-237. Disponible en: https://www.sciencedirect.com/science/article/pii/S0208521619304693?via%3Dihub

