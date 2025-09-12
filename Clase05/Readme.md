# Clase N° (04/09/2025)

## ** Array**

Un array es una estructura de datos en programación que permite almacenar y ordenarlos de manera mas eficiente 
Estructura de datos en programación que permite almacenar
Para usar las variables de un array debo ir a buscarlo con nombreArray[indice]

## **Ciclo fork**

Consiste en que una funcion se repite varias veces por un momento determinado, que ayuda al almacenamiento de datos

```
int numerosLost[] = {4, 8, 15, 16, 23, 42};

void setup() {
  //para usar las variables de un array debo ir a buscarlo con nombreArray[indice]

  //Serial.println(numerosLost[0]);
  //Serial.println(numerosLost[1]);
  //Serial.println(numerosLost[2]);
  //Serial.println(numerosLost[3]);
  //Serial.println(numerosLost[4]);
  //Serial.println(numerosLost[5]);

  //Se evita esto con un ciclo for
  //para declarar un ciclo for, tenemos que tener claras 3 cosas
  //1. donde inicia -> 0 para esto se crea una variable local 
  //2. donde termina (condicion de salida) -> 5
  //3. como varia -> de 1 en 1

Serial.println("empezando ciclo for");
  for (int i = 0; i <= 5; i++ ){
    delay(1000);
  }
  Serial.println("sali del ciclo for");
}

void loop() {
  // put your main code here, to run repeatedly:

}
```


## **Texto en pantalla oled**

```
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definir tamaño del display
#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

// Dirección I2C típica (0x3C o 0x3D) [Si no funciona una intentar con la otra]
#define OLED_ADDR 0x3C  

// Crear objeto display. Existe la programacion de objetos
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire);

int posicionVertical = 0;

void setup() {
  // Iniciar la pantalla
  if(!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
    Serial.begin(9600);
    Serial.println(F("No se encontró pantalla SSD1306"));
    for(;;); // se queda detenido
  }
}

void loop() {
  posicionVertical++;
 
    display.clearDisplay();             // limpiar buffer (Genera un lienzo en blanco)
  display.setTextSize(1);             // tamaño del texto
  display.setTextColor(SSD1306_WHITE);// color del texto

  display.setCursor(20, posicionVertical);          // posición (x,y)
  display.println("Hola mundo");      // escribir texto
  display.display();                  // mostrar en pantalla

  if (posicionVertical > ALTO_PANTALLA){
    posicionVertical = 0;
  }

  delay(300);
}
```

![CircuitoPantallaOled](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase05/Clase05/circuitoPantallaOled.jpg)

![PantallaOled](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase05/Clase05/PantallaOled.jpg)

![Apuntes de mi cuaderno](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase05/Clase05/apuntesCuaderno.jpg)
