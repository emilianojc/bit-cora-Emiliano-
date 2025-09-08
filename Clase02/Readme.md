# Clase 14/08/2025

En esta clase estamos aprendiendo a utilizar processing. Un lenguaje de programacion que proviene del JAVA. 

Los lenguajes de programacion tienen una consola donde podemos visualizar la informacion, accediendo con funciones de tipo "print".

Los comentarios se hacen con // y sirven para escribir notas sin que el rpograma, en este caso processing lo detecte como parte del codigo.

"print" significa imprimir y es una funcion.

Las funciones en processing se escriben:    **funcion(argumento);**

Cuando la palabra escrita esta entre comillas ("") es una palabra para imprimir 

Cada linea se cierra con un punto y como (;)


## **Variables** 

Las variables son numeros o datos que guardan informacion. 

Para crarlas primero debemos definir el TIPO de variable. El tipo de variable es un contenedor 

Para crear caracteres uso la variable de tipo (char)

La sintaxis de los char nos obliga a utilizar las comillas simples ' '

![Letra](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/char%20con%20letra%20.png)

**Los char no me sirve para los numeros, ya que como esta diseñado para letras en la consola nos muestra el numero del caracter.**

![char con numero](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/chart%20con%20numeros%20.png)


### **Para los numeros existen las variables:**

int para los numeros enteros

![int numeros enteros](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/int%20nuemeros%20enteros%20(21).png)
![int lasuma](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/int%20(lasuma).png)

**El tipo de VARIABLE se declara solo UNA vez**

![int avenger](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/int%20(avenger).png)

En processing y en otros programas de programcion la consola considera las ultimas lineas como validas 

float para los numeros desimales 

En terminos de computacion los float ocupan mas espacio. 

![float numeros decimales](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/float%206.1.png)

Uno puede convertir float en int 
Con la FUNCION int() le quito los desimales al numero de la FUNCION float

![de float a int](https://github.com/emilianojc/bit-cora-Emiliano-/blob/main/Clase02/Clase02/Transformacion%20de%20float%20a%20int%20.png)

**Saltos de linea**

```
println(); // salto de linea facil 
print("\n"); //salto de linea dificil
```

## **Graficacion basica en processing** 

Para graficar en procesing tenemos el "sketch" que es la hoja en blanco que funciona igual que un plano cartesiano, utilizando el eje X y el eje Y.

Lo principal que debe tener el canvas es:

```
void setup(){
}

void draw(){
}
```

En "void setup()" se colocan aquellas funciones que no se quieren modificar como por ejemplo el tamaño y color del lienzo (size)(backgraund)

En el "void draw()" se colocan aquellas funciones en donde se puede hacer una iteracion. 

**Las variables se suelen crear antes del "setup"**

Si la variable se declara fuera del "setup" se le llama variable global 


Para ajustar el tamaño del lienzo:

```
size(x,y);
```

Definir el color de fondo:

Si utilizamos solo un numero, el color de fonde se presenta en escala de grices.

Si utilizamos los numeros de segun (R,G,B) tendremos variedad de colores. 

```
backgroun(N°);
backgroun(R,G,B);
```

Para hacer una linea debemos:

```
line(x1,y1,x2,y2);
```

Para incluir texto en el canvas se utiliza la funcion:

```
text("texto que se quiere escribir", x,y);
```

Para ajustar el tamaño del texto se debe realizar la siguiente funcion antes que la funcion "text"

```
textSize(N°);
```

Parra rellenar el color de un texto o una figura utilizamos la funcion:

```
fill(N°);
```

La funcion (frameCount) ayuda a visualizar los frame por segundo 

```
frameCount 
```

Se uede cambiar el (frameRate) se puede cambiar en el (setup) y es por defecto 60 pero se puede cambiar 

```
frameRate(N°);
```

## **LAS PRIMITIVAS**

Triangulo 

```
triangle(x1, y1, x2, y2, x3, y3);
```

Cuadrado 

```
rect(a, b, c, d)
```

Circulo u ovalo 

```
ellipse(a, b, c, d)
```

Cambio el color del fondo con el mause

```
mouseX
```
