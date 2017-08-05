/* 
 *  Dauerhaftes Blinken: blau-grün-rot
 *  
 *  Hardware: 3-Farben-LED an pins  
 *  5 - blau, 6 - grün, 7 - rot
 */


#define BLUE 5
#define GREEN 6
#define RED 7


void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  delay(500);
  
  digitalWrite(BLUE, LOW);  
  digitalWrite(RED, HIGH);
  delay(500);
  
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(500);
}
