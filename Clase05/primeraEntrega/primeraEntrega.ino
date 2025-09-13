#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//Definicion de pantalla
#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, OLED_RESET);

//comienzo array
const char* frases[] = {
  "¿Marxista?",
  "No...",
  "Ateo,",
  "gracias a Dios."
};

int totalFrases = sizeof(frases) / sizeof(frases[0]);

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(1); 
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);     
  display.display();
}

void loop() {
  for(int i = 0; i < totalFrases; i++) {
    display.clearDisplay();   
    display.setCursor(0, 20);  
    display.println(frases[i]);
    display.display();         
    delay(2000);
  }
}
