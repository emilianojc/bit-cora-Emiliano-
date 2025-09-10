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

