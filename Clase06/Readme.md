# Clase 25/09/2025

Trabajo de processing, texto y camara 

Sensor capacitivo 

sonic pi -> sofwer para programar sonido 

Livecoding -> practica musical que comenzo en inglaterra. El DJ esta en vivo progrmando la musica mientras la gente disfruta 

Referente: 

Cristian Oyarsun 

hypereikon

Olivia Jack -> artista medial, creo su propio sofwer (hydra jack)


## Pseudo codigo 

Es un codigo que se desglosa desde lo mas general a lo mas especifico 

Input -> CAJA NEGRA -> actuador/resultado 

Input:
Sensibilidad 
Sensor 
Info

Actuador:
Agencia 
Aplicada 

Fenomeno -> Sensor -> Señal (variacion electrica)-> MC (microcontrolador) -> Variable -> Autput -> Driver/intefaz que diriga todo a -> Actuador -> Fenomeno 

Ambito scope 

**pseudocodigo**

declarar variables-> definir donde va guardad la info. y que info. se utilizara

 ¿Que necesito para declarar una variable?
el tipo de variable 
tipo de almacenamiento (N° pequeño, N° grande, si ono, palabra, caracter, etc)
 si tiene mas (,) float
 si son palabras String
 si son si o no: bool

El setup sirve para inicializar -> preparar lo que se utilizara

inicializamos que queremos trbajar con el serial 
Serial.begin(9600);

decidimos si los pines seran INPUT o OUTPUT 
si escribimos informacion hacia fuera, ¿donde se escriben?
pinMode(pinLed, OUTPUT);

usar la variable para guardar la informacion 
informacion = analogRead(A0); 
ahora informacion conoce el mundo (en este caso, de 0 a 1023)

actualizar, operar, pregutnar a la informacion que estoy recibiendo 

 es mayor o menor que
 quiero que sea proporcional a otro rango 
 quiero saber en que lugar 

 Utilizamos if 

**Procesing**

skech-> importar biblioteca-> 

Archivo-> Ejemplos -> biblioteca-> gestionar biblioteca-> instalar 

 
