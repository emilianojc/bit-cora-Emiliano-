int ledPin = 13;
//tiempos
int tiempoPunto = 100; 
int separador = 50; 
int tiempoRaya = 500;
int finCaracter = 100; 
int espacio = 500; 

void setup() 
{
pinMode(ledPin,OUTPUT); 
//9600 hace referencia a los datos por segundo
//Esta funcion debemos colocara para que MonitorSerial lea lo que estamos haciendo
Serial.begin(9600);
}

void loop()
{
  //llamamos la funcion punto para generar uno 
  punto();
  //llamamos una funcion raya 
  raya();

  //el OSO es 
  // --- ... ---
  o();
  s();
  o();

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

void o(){
  raya();raya();raya();
}

void s(){ 
punto();punto();punto();

}