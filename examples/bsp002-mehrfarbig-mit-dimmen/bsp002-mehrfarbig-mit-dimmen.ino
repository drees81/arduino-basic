/* 
 *  dimmen: blau-grün-rot
 *  
 *  Hardware: 3-Farben-LED an pins  
 *  11 - blau, 12 - grün, 13 - rot
 */

#define PIN_BLUE 11
#define PIN_GREEN 12
#define PIN_RED 13

void setRGB(int r, int g, int b) {
  analogWrite(PIN_RED, r);
  analogWrite(PIN_GREEN, g);
  analogWrite(PIN_BLUE, b);  
}

void setRGB(int rgb[]) {
  setRGB(rgb[0], rgb[1], rgb[2]);
}

void setRGB(int rgb[], int helligkeit) {
  setRGB( 
    (rgb[0] * helligkeit) / 255,
    (rgb[1] * helligkeit) / 255,
    (rgb[2] * helligkeit) / 255
   );
}

void setup() {
  pinMode(PIN_BLUE, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
}

void loop() {

  int red[]   = {255,   0, 0};
  int green[] = {  0, 255, 0};
  int blue[]  = {255,   0, 0};

  int white[]  = {255, 255, 255};
  int black[]  = {  0,   0,   0};
  
  int lila[] = {255,   0, 255};
  int cyan[] = {0,   255, 255};
  int yellow[] = {255,   255, 0};

  setRGB(yellow);
  delay(500);
  
  setRGB(lila);
  delay(500);

   for (int helligkeit=255; helligkeit >= 0; helligkeit--){
      setRGB(lila, helligkeit);
      delay(10);
   } 

}

