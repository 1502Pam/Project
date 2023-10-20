# Fundamentos de Biodiseño
</p>
<image align="center;" width="1200px;" style="border-radius: 90%;" src ="../Imágenes/imagen_read.png">
  <h3 align="center">
Ingeniería Biomédica PUCP-UPCH
  </h3>
  <h5 align="center">
     Bienvenidos al repositorio del Grupo 14 del curso "Fundamentos de Biodiseño"
  </h5>
</p>


</p>
  <h5 align="center">
    Tema de proyecto: Sistema somatosensoriales en prótesis no invasivas del miembro superior
  </h5>
  
</p>

## Indice.

**- [Problemática](#Problemática)**<br>
**- [Estado del arte](#Estado-del-arte)**<br>
**- [Tecnología existente en el ámbito de patentes](#Tecnología-existente-en-el-ámbito-de-patentes)**<br>
**- [Lista de requerimientos](#Lista-de-requerimientos)**<br>
**- [Propuesta de solución](#Propuesta-de-solución)**<br>
**- [Bibliografía](#Bibliografía)**<br>



## Problemática
La problemática es que existe una deficiencia de sistemas somatosensoriales que transmiten información a personas con prótesis del miembro superior en el Perú.

## Estado del arte
Se hizo una investigación sobre el estado de arte dirigido a la problemática. Tras analizar la información obtenida, se eligieron las propuestas más convenientes e importantes:

### Tecnología existente en el ámbito académico

#### 1. Mejoras en la manipulación de objetos gracias al entrenamiento de una sola sesión superan las diferencias entre los sitios de estimulación durante la retroalimentación vibrotáctil.
La mayoría de las prótesis no proporcionan retroalimentación háptica intencional sobre el desempeño del movimiento, limitando a los usuarios a solo obtener la información acerca del estado de la prótesis a través de la vista. No obstante, el presente artículo se enfoca en comprender los efectos del aprendizaje y los diferentes sitios de estimulación en la retroalimentación háptica intencional utilizando estimulación vibrotáctil en la manipulación de objetos virtuales, en donde través de una interfaz robótica para manipular objetos virtuales con retroalimentación visual y vibrotáctil en cuatro sitios del cuerpo (dedo, brazo, cuello y pie). La retroalimentación háptica mejora la interacción del usuario con la prótesis y le permite sentir y percibir su entorno de una manera más natural; este procedimiento involucra el uso de sensores, procesamiento de datos, integración de los componentes a la prótesis del usuario y la etapa más importante, la retroalimentación vibrotáctil, esta puede tomar diferentes formas como vibraciones o presión [16].

#### 2. Diseño e implementación de un control de impedancia para mejorar el desempeño de un prototipo de prótesis de mano que usa brazalete MYO.
El funcionamiento de este sistema se basó en las señales de retroalimentación disponibles, la fuerza ejercida, la velocidad y el uso de sensores SFR ubicados en la punta de los dedos, los cuales se utilizan para cuantificar la fuerza ejercida sobre el entorno. El brazalete de vibración proporciona la retroalimentación sensorial distintiva cuando el manipulador aplica  una fuerza correspondiente al movimiento. El sistema de control de admisión se implementa a través de dispositivo PSoC programable, en donde se configuran los señales de entrada y salida. En conclusión, se logra regular la fuerza aplicada al entorno y la velocidad de movimiento del dispositivo manipulador, todo esto basado en la retroalimentación de fuerza medida por los sensores SFR [17].

#### 3. Núcleo somatosensorial talámico humano como lugar de estimulación mediante entradas de sensores táctiles nocivos y térmicos en una prótesis activa.  
El locus sensorial somático del prosencéfalo para la entrada de sensores en la superficie de una prótesis activa es un componente importante de la interfaz cerebro-máquina. Este dispositivo analiza las respuestas neuronales a estímulos cutáneos controlados y las sensaciones inducidas por la estimulación a niveles de corriente de microamperios (TMIS) en el núcleo caudal ventral talámico humano (Vc), puede producir retroalimentación somatotópica con patrones útiles al Sistema Nervioso Central a partir de sensores en una prótesis activa, pidiendo evocar sensaciones similares a las producidas por estímulos táctiles naturales. En pacientes con lesiones importantes que conducen a la pérdida de información sensorial somática, TMIS a menudo evoca sensaciones en la representación de partes del cuerpo con pérdida de información sensorial, incluyendo el problema del miembro fantasma después de una amputación [18].

### Tecnología existente en el ámbito de patentes

| Inventores y Año de publicación | Descripción|              Imagen               |
| ------- | ----------- | -------------------------------- |
|<h4>Codigo: SE1950373A1<h4/> <h4> Antonio Speidel, bo viejo, Michael Scarsen<h4/> <h4>(2020)<h4/> | <h4>"Aparato para medir la percepción vibrotáctil y método de preparación del mismo, incluida la medición automatizada de temperatura"<h4/><h6>            Este aparato está destinado a medir la percepción vibrotáctil en sujetos humanos; este dispositivo consta de una sonda de vibración con una extremidad diseñada para acoplarse a una parte del cuerpo del sujeto, un sensor de temperatura sin contacto que mira hacia la parte del cuerpo cuando se acopla con la extremidad de la sonda y un sensor de fuerza acoplado. Antes del procedimiento, la unidad de control calcula parámetros basados ​​en las señales de salida del sensor de temperatura sin contacto o del sensor de fuerza, indicando la presencia o ausencia de la parte del cuerpo, es decir, este aparato aborda los desafíos de medir la percepción vibrotáctil y la temperatura de la piel de manera automatizada y precisa, lo que lo convierte en una herramienta valiosa para la detección temprana de problemas de percepción vibrotáctil en partes del cuerpo de sujetos humanos.[19] <h6/> |<p align="center"> <img width="2000" height="250" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/iamgen%201.jpg"> </p>|
|<h4>Codigo: USOO7438724B2<h4/> <h4>Harold H. Sears, Arthur D. Dyek, Edwin K. Iversen, Steven R. Kunz, James R. Linder, Shawn L. Archer, Reed H. Grant, Ronald E. Madsen Jr.<h4/> <h4>(2018)<h4/> |<h4>"Sistema y método de retroalimentación y fuerza" <h4/> <h6>         En la presente invención se proporciona un sistema y un método de retroalimentación de la fuerza de agarre para su uso con un dispositivo protésico. El sistema puede incluir una mano protésica que tiene una pluralidad de dígitos para usar con el dispositivo protésico. Se puede proporcionar un sensor de fuerza para producir una señal de fuerza y ​​el sensor de fuerza está configurado para asociarse con la pluralidad de dígitos de la mano protésica. Además, un controlador de retroalimentación de fuerza puede recibir la señal de fuerza del sensor de fuerza. Un actuador de retroalimentación de fuerza también está en comunicación con el controlador de retroalimentación de fuerza. El accionador de retroalimentación de fuerza puede proporcionar vibraciones de retroalimentación a un usuario del dispositivo protésico.[20] <h6/>|<p align="center"> <img width="2500" height="250" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/imagen%202.png"> </p>|
|<h4>Codigo: US20170020693A1<h4/> <h4>Stuart D. HarshbargerJames D. BeatyR. Jacob VogelsteinNitish V. Thakor <h4/> <h4>(2016)<h4/> | <h4>"Detección de objetos y guía localizada de las extremidades." <h4/><h6>         La invención descrita proporciona un sistema y un método de retroalimentación de la fuerza de agarre para su uso con un dispositivo protésico. El sistema incluye una mano protésica con una pluralidad de dígitos para usar con el dispositivo protésico. Además, se proporciona un sensor de fuerza que está configurado para asociarse con la pluralidad de dígitos de la mano protésica y producir una señal de fuerza. El controlador de retroalimentación de fuerza recibe la señal de fuerza del sensor de fuerza, y el actuador de retroalimentación de fuerza también está en comunicación con el controlador de retroalimentación de fuerza. El accionador de retroalimentación de fuerza puede proporcionar vibraciones de retroalimentación a un usuario del dispositivo protésico para mejorar la experiencia de uso y la precisión en la realización de tareas. [21]<h6/> |<img width="2700" height="250" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/imagen%207.png">   |

## Dispositivos comerciales
| Dispositivo |Descripción|Características principales|             Imagen               |
| ------- | ----------- | ------------------------- |--------------|
|<h4> 1. Ability Hand<h4/><p>.Empresa: Psyonic.|<h6>Prótesis mioeléctrica con sensación háptica en donde la velocidad de movimiento es dos veces más rápida que una prótesis normal. Esta prótesis cuenta con 32 patrones de agarres, resistente al agua y  dúctil. Este dispositivo cuenta con sensores ubicados en las yemas de los dedos que detectan la presión al agarrar un objeto, mandando como señal de salida feedback sensorial expresada en vibraciones  en el brazo [22]<h6/>|. Tamaño: Pequeño (189 mm de largo por 110 mm de ancho por 55 mm de fondo) y grande  (200 mm de largo por 110 mm de ancho por 55 mm de fondo)<p>.Una batería de 7,4 V y 2200 mA<p>.Conectividad Bluetooth<p>.Retroalimentación táctil sensorial.<p>.Microprocesador L6882|<p align="center"><img width="2000" height="200" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/pros%201.jpeg">|
|<h4> 2. I-LIMB Hand<h4/><p>.Empresa: Ossur|<h6>Protesis mioeléctrica controlada por un sistema de control que utiliza una señal muscular mioeléctrica  de dos entradas para abrir y cerrar los dedos realistas de la mano. Cada dedo utiliza un motor en cada articulación, lo que proporciona un agarre flexible que el usuario puede ajustar a  la forma del objeto que se está agarrando.[23]<h6/>|. La mano i-LIMB utiliza señales eléctricas generadas por los músculos residuales del usuario para controlar los movimientos de la prótesis. Sensores electromiográficos (EMG) capturan estas señales y las traducen en comandos para la mano artificial.</p>. La i-LIMB está diseñada para replicar de manera cercana los movimientos naturales de una mano humana.</p>. Batería recargable: La i-LIMB generalmente funciona con una batería recargable que proporciona una autonomía suficiente para un uso diario normal.|<p align="center"><img width="2000" height="200" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/pros%202.jpeg">
|<h4>3. MYHAND<h4/><p>Empresa: HY5-Bionics.|<h6>Myhand es una prótesis robótica con retroalimentación sensorial para recuperar la funcionalidad de una mano amputada utilizando tecnologías portátiles no invasivas.Es una prótesis de miembro superior que tiene varios agarres adaptables y sensibles. Los dedos se doblarán alrededor de cualquier forma u objeto determinado y usted puede ayudar activamente a la mano a cerrar el puño o señalar con el dedo índice. Para un agarre óptimo, ahora presentamos MySkin.<h6/>|. Tamaño: 7 ¾ </p> . Patrones de agarre: pellizco, potencia, trípode, puño, apuntar.</p> . Rendimiento:  Potencia máxima de agarre: 120N. Agarre máximo del trípode: 60N.  </p> . Dígitos de los dedos de titanio indestructibles. </p> . Peso: 575 g.</p> . Retroalimentación háptica sensorial.|<p align="center"><img width="2000" height="200" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/WhatsApp%20Image%202023-09-15%20at%2011.25.36%20PM.jpeg">

## Lista de requerimientos

| Funcionales | No funcionales |
| ------- | ----------- |
| Control de intensidad personalizable (retroalimentación adaptativa)| Ligero y flexible pues no debe afectar a la movilidad del usuario |
| Mejorar la percepción tactil al usuario | No debe ser invasivo |
| Capacidad de detectar señales de entrada (presión y fuerza)| Resistente a condiciones ambientales adversas, golpes o vibraciones |
| Permitir el control del feedback sensorial a través de sensores vibrotáctiles| Evitar la gestión de la sobrecarga sensorial (filtros y priorización de señales) |
| Respuesta rápida de la prótesis a los movimientos e intenciones del usuario.| Funcionamiento continuo durante largos periodos de tiempo |
|Correcta lectura de datos de entrada mediante un software| Es portatil y estético|


## Propuesta de solución
Creación de un sistema de retroalimentación somatosensorial para una prótesis de miembro superior que le permita al usuario obtener la sensación de fuerza y presión a  través de sensores vibrotáctiles. 


## Bibliografía

[16] Stepp CE, Matsuoka Y. Object manipulation improvements due to single session training outweigh the differences among stimulation sites during vibrotactile feedback. IEEE Trans Neural Syst Rehabil Eng [Internet]. 2011;19(6):677–85. Disponible en: http://dx.doi.org/10.1109/tnsre.2011.2168981 

[17] Aguilar, A. & Vargas, D. Diseño e implementación de un control de impedancia para mejorar el desempeño de un prototipo de prótesis de mano que usa brazalete MYO. [Internet]. 2022. [citado: 2023, septiembre] Disponible en: http://hdl.handle.net/11349/30597    

[18] Chien J, Korzeniewska A, Colloca L, Campbell C, Dougherty P, Lenz F. Human thalamic somatosensory nucleus (ventral caudal, vc) as a locus for stimulation by INPUTS from tactile, noxious and thermal sensors on an active prosthesis. Sensors (Basel) [Internet]. 2017 [citado el 10 de septiembre de 2023];17(6):1197. Disponible en: http://dx.doi.org/10.3390/s17061197 

[19] Strbac M, Bijelic G, Malesevic N, Keller T. Sistema y método de realimentación electrotáctil. Patentar. ES:2930590:T3, 2022.
Disponible en https://patents.google.com/patent/ES2930590T3/

[20] Sears HH, Dyck AD, Iversen EK, Kunz SR, Linder JR, Archer SL, et al. System and method for force feedback [Internet]. [cited 2023 Sep 14]. URL disponible en: https://patents.google.com/patent/US7438724B2/en

[21] Harshbarger SD, Beaty JD, Jacob Vogelstein R, Thakor NV. Multi-modal neural interfacing for prosthetic devices. US Patent. 20170020693:A1, 2017.Disponible en https://patents.google.com/patent/US20170020693A1/

[22] Ability handTM — [Internet]. PSYONIC. [citado el 16 de septiembre de 2023]. Disponible en: https://www.psyonic.io/ability-hand 

[23] I-limb® quantum bionic hand. Ossur.com [Internet]. Ossur.com. [citado el 16 de septiembre de 2023]. Disponible en: https://www.ossur.com/en-us/prosthetics/arms/i-limb-quantum

[24] Hy M—. MyHand — Hy5 [Internet]. Hy5 | Worlds 1st hydraulic hand prosthesis. [citado el 16 de septiembre de 2023]. Disponible en: https://www.hy5-bionics.com/myhand

