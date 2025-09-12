void setup(){
  size(800, 950);
  background(mouseX, 222,42,0);
}
void draw(){
  background(mouseX, 255, 250);
  textSize(40);
  fill(255, 255,255);
  text("¿Marxista?..No, ateo, gracias a Dios", 100, 500);
  
  beginShape();
  fill(30, 31, 33);
  vertex(50,400);
  vertex(50,550);
  vertex(250,550);
  vertex(250,700);
  vertex(400,700);
  vertex(400,550);
  vertex(850,550);
  vertex(850,400);
  vertex(400,400);
  vertex(400,250);
  vertex(250,250);
  vertex(250,400);
  vertex(50,400);
  endShape();
  textSize(40);
  fill(255, 255,255);
  text("¿Marxista?..No, ateo, gracias a Dios", 100, 500);
}
