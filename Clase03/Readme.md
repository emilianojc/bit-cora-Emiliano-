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
