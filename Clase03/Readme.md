# **Clase 21/08/2025**

## Como añadir una imagen:

//Esta imagen es solo de prueba para aprender a añadir imagenes en Github

La manera de añadir una foto es: ![Texto referido a la imagen](ubicacionde la foto.jpg)

# **Arduino**

Partimos haciendo una variacion en el codigo Blink de los ejemplos que trae Arduino. Esto para comprobar el funcionamiento de la placa.

Al utilizar arduino nos damos cuenta que funciona de manera similar a processing pero con variaciones. Partiendo por su parte superior que tiene dos botones, uno que llamamos verificar (sirve para codificar el codigo y revisar que este bien sin la necesidad de tener un arduino concetado) y otro se llama subir ( y sirve para enviar el codigo a la placa)

Para comenzar a programar en Arduino debemos saber como se forma:

En el void setup() se colocan aquellas cosas que no se quieren repetir 
```
void setup()
{
}
```

En el void loop() se colocan aquellas cosas que Si se quieren repetir. 

```
void loop()
{
}
```

Para comenzar a utilizar el arduino luego de conectarlo debemos revisar si los pienes que tenemos son output o inputs.

El LED interno de Arduino esta conectado en la pata 13. 
Para decirle a arduino que el pin 13 es un output. La sintaxis es:

```
pinMode(numeroDePin, INPUT U OUTPUT); 
```

Esta sintaxis se coloca en el void setup() ya que estamos declarando un pin.

Y en el void loop() se coloca la funcion que se relaciona con el pin ya declarado en el void setup().

```
digitalWrite(numeroDePin, estado0o1);
```

Para crear una variable en donde decimos donde esta el LED debemos: 
programar con una funcion que se llama delay(N°); y con esta funcion alteramos el tiempo de encendido y apagado en el codigo. Esto se calcula en  milisegundos. 

```
void loop()
{
  //prendemos el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); 
  //apagamos el LED 
  digitalWrite(ledPin, LOW);
  delay(1000);
}


```

La cantidad de datos que se pueden transferir por segundo es distinto a la tasa de comunicacion 

```
int ledPin = 13;
int tiempoOn = 100; //tiempo de encendido 
int tiempoOff = 1000;
void setup() 
{
pinMode(ledPin,OUTPUT); 
//9600 hace referencia a los datos por segundo
//Esta funcion debemos colocara para que MonitorSerial lea lo que estamos haciendo
Serial.begin(9600);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  Serial.println("me prendi");

  delay(tiempoOn); 
 
  digitalWrite(ledPin, LOW);
  Serial.println("me apague");
  delay(tiempoOff);
}
```

## **Aplicancion de codigo morse con Arduino**

La letra a en codigo morse es .-

```
int ledPin = 13;
//tiempos
int tiempoPunto = 100;
int separador = 50;
int tiempoRaya = 500;
int finCaracter = 100;

void setup()
{
    pinMode(ledPin,OUTPUT);
    //9600 es el baud rate
    //o tasa de baudios
    Serial.begin(9600);
}

void loop()
{
    //la A en morse .-
    //prendemos el punto
    digitalWrite(ledPin,HIGH);
    Serial.println("punto");
    //esperamos el punto encendido
    delay(tiempoPunto);
    //apagamos el punto
    digitalWrite(ledPin,LOW);
    //el espacio despues del punto
    delay(separador);
    
    //empezamos una raya
    digitalWrite(ledPin,HIGH);
    Serial.println("raya");
    //espero el tiempo de la raya
    delay(tiempoRaya);
    //apagamos la raya
    digitalWrite(ledPin,LOW);
    
    //cerramos el caracter
    delay(finCaracter);
}
```

# **Encargo de la clase**

Escribir la frase con la que estamos trabajando en codigo morse en el arduino 

```
int ledPin = 13;
//tiempos
int tiempoPunto = 100; 
int separador = 50; 
int tiempoRaya = 500;
int finCaracter = 100; 
int espacio = 500; 

void setup() {
  pinMode(ledPin,OUTPUT); 
  Serial.begin(9600);
}

void loop() {
//¿Marxista?... No, ateo, Gracias a Dios

punto();
raya();

m();
a();
r();
x();
i();
s();
t();
a();

n();
o();

a();
t();
e();
o();

g();
r();
a();
c();
i();
a();
s();

a();

d();
i();
o();
s();

  //cerramos el caracter 
  delay(finCaracter);
  Serial.println("cierre");
}

void punto(){ //crear una funcion que genere un punto 

  //Prendemos el punto 
  digitalWrite(ledPin, HIGH);
  Serial.println("punto");
  //esperamos el punto encendido 
  delay(tiempoPunto); 
  //apagamos el punto 
  digitalWrite(ledPin,LOW);
  //el espacio despues del punto 
  delay(separador);
}
void raya(){
   //empezamos una raya 
  digitalWrite(ledPin, HIGH);
  Serial.println("raya");
  //espero el tiempo de la raya 
  delay(tiempoRaya); 
  //apagamos la raya 
  digitalWrite(ledPin,LOW);
}

void a(){
  punto();raya();
}

void b(){
  raya();punto();punto();punto();
}

void c(){
  raya();punto();raya();punto();
}

void d(){
  raya();punto();punto();
}
void e(){
  punto();
}
void f(){
  punto();punto();raya();punto();
}
void g(){
  raya();raya();punto();
}
void h(){
  punto();punto();punto();punto();
}
void i(){
  punto();punto();
}
void j(){
  punto();raya();raya();raya();
}
void k(){
  raya();punto();raya();
}
void l(){
  punto();raya();punto();punto();
}
void m(){
  raya();raya();
}
void n(){
  raya();punto();
}
void o(){
  raya();raya();raya();
}
void p(){
  punto();raya();raya();punto();
}
void q(){
  raya();raya();punto();raya();
}
void r(){
  punto();raya();punto();
}
void s(){
  punto();punto();punto();
}
void t(){
  raya();
}
void u(){
  punto();punto();raya();
}
void v(){
  punto();punto();punto();raya();
}
void w(){
  punto();raya();raya();
}
void x(){
  raya();punto();punto();raya();
}
void y(){
  raya();punto();raya();raya();
}
void z(){
  raya();raya();punto();punto();
}


```
