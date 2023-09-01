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
- Chavez Rivas Allen Stirs (Encargado de la electrónica y programación)
- Lazares Salcedo, Brayam Joe (Encargado de manufactura digital y programación)
- Llanos Florian Dhiago Gustavo (Coordinador y encargado de manufactura digital)
- Medina Burga Yuliana Abigail (Encargada del modelado del prototipado y programación)
- Sanchez Valverde Mariel Linette (Encargada de programación y repositorio Github)
- Vilchez Cotrina Pamela Nicole (Encargada del repositorio Github y electrónica)


## Análisis del caso clínico

Según el Boletín Estadístico Mensual de Notificaciones de accidentes de Trabajo, Incidentes Peligrosos y Enfermedades Ocupacionales, en el Perú, durante el mes de abril del 2023, se reportaron 2390 personas que sufrieron accidentes de trabajo, destacando los siguientes datos: 

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


La fuerza y la precisión crean patrones motores y señales nerviosas que originan el movimiento que deseamos. Por tal motivo, después de una amputación, la fuerza desproporcionada en los miembros se trabaja con rutinas de terapia, con el fin de enseñar al paciente a mantener las articulaciones en la posición adecuada. Por las estadísticas mostradas, las amputaciones de mano parcial varían desde un solo dedo o múltiples dedos hasta amputaciones carpometacarpianas. La prensión y la oposición a menudo se pueden lograr si se oponen, de alguna manera, los dedos naturales y los protésicos. De esta manera, cuando la amputación se da en los dedos de la mano desencadena problemas como la hiperestesia y la pérdida de fuerza de agarre, el cual se clasifica en cilíndrico, esférico, gancho, precisión, palmar y lateral.

En primer lugar, una amputación del pulgar puede resultar en una pérdida del 40% de las funciones de la mano y en un 22% de la función total de la persona, puesto que afecta directamente a los músculos abductor corto, flexor corto y aductor corto; los cuales son de suma importancia para el movimiento palmar de la mano y el agarre de objetos en múltiples posiciones.

En segundo lugar, las amputaciones proximales a las falanges medias de los dedos pueden disminuir la fuerza de agarre y limitar el agarre en pinza y en otros movimientos motores finos. En el caso del dedo medio, el músculo afectado es el lumbrical. 

Si bien adaptarse a realizar las mismas actividades de trabajo con los dedos perdidos no es imposible, es más fácil y tiene una mayor probabilidad de éxito el usar una prótesis, puesto que está asociada con la disminución en la sensación del miembro fantasma y dolor en el miembro residual. Respecto al posicionamiento de una prótesis, existen 4 técnicas que permiten el ajuste de esta con el muñón: al vacío, correas, succión e interfaz con traba. Dependiendo del tipo de movimiento y situación del paciente, se suelen fusionar con almohadillas de gel y medias protésicas.

### Tabla de tipos de prótesis con diferentes funcionalidades

| Prótesis | Descripción | Tasa de abandono |
| ------------- | ------------- | ------------- |
| Prótesis funcional pasiva | - Aumenta la longitud digital. - Restaura la cosmosis y mejora el desempeño general de la mano. - Suelen estar hechos de silicona | 100% |
| Prótesis impulsadas por el cuerpo (Body-Powered) | - Aprovechan la anatomía restante de la amputación. - Independientes de baterías externas o electricidad. - Sincrónico con movimientos naturales de la mano. - Limitaciones cosméticas (alto grado de mantenimiento y peso excesivo) | 80-85% |
| Prótesis impulsadas externamente (Externally-Powered) | - Ideales para amputaciones trans-metacarpianas. - Destacan las mioeléctricas (MYO) que registran señales de electromiografía de superficie. - Logra posturas de agarre de forma independiente y sincronizada. | 75% |
| Prótesis para actividades específicas | - Destinadas a varios tipos de amputaciones. - Limitación a una única función a suplir. - Preferido como herramienta de asistencia en lugar de reemplazo del miembro amputado | |

Por ello, la impresión 3D es el último avance en el campo del diseño protésico, pues es capaz de fabricar prótesis de bajo costo y menor peso. La característica principal de esta es su tecnología de fabricación aditiva, donde los productos son construidos agregando capa por capa en una placa de construcción para producir el producto final; otorgando como principal ventaja la capacidad de proporcionar una alta relación resistencia-peso a través de un relleno configurable (8).


## Clínica de problemáticas en salud

Teniendo en cuenta el caso clínico presentado, se menciona que el usuario presenta sensación de miembro fantasma y dolor persistente, asimismo se ve necesario tomar medidas para fortalecer la musculatura residual y favorecer actividades uni/bimanuales para facilitar sus actividades de vida diarias.

Además, logramos identificar los siguientes problemas de MMII en la amputación transtibial: marcha compensada, alteración sensorial táctil y dificultad para reconocer un adecuado punto de apoyo. 

Por otro lado, en cuanto a los MMSS, la amputación transmetacarpiana y desarticulación interfalángica proximal del dedo medio distinguimos las siguientes dificultades: dolor palpable a nivel de musculatura interósea y lumbricales, control inadecuado de la presión palmar, movimiento mínimo del músculo oponente del pulgar y fuerza de presión disminuída

## Problemática

Nula fuerza de agarre e imprecisión por parte del pulgar derecho, debido a la amputación transmetacarpiana en adultos con alta actividad laboral manual 

## Estado del arte científico



## Docentes del curso

- Paulo Camilo Alberto Vela Anton
- Renzo Jose Chan Rios
- Umberto Lewis De la Cruz Rodriguez
- Juan Manuel Zuñiga Mamamni
- Jose Alonso Caceres del Aguila
- Andres Arturo Rodrigo de Velasco
- Yeni Varillas Tacza

## Bibliografía 




