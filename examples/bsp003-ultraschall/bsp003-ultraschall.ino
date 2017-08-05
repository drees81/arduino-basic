
#define PIN_ECHO 6
#define PIN_TRIGGER 7

long dauer=0; 
long entfernung=0; 

void setup() {
  Serial.begin (9600); 
  pinMode(PIN_TRIGGER, OUTPUT); 
  pinMode(PIN_ECHO, INPUT); 
}

void loop() {

  // Ultraschall impuls senden
  digitalWrite(PIN_TRIGGER, HIGH); 
  delay(10);
  digitalWrite(PIN_TRIGGER, LOW);
  
  // Zeit messen
  dauer = pulseIn(PIN_ECHO, HIGH); 
  // Entfernung berechnen
  entfernung = (dauer/2) * 0.03432;

  // Plausibilität prüfen
  if (entfernung >= 500 || entfernung <= 0) {
    // Messfehler ausgeben
    Serial.println("Kein Messwert"); 
  } else {
    // Messwert ausgeben
    Serial.print(entfernung); 
    Serial.println(" cm"); 
  }
  delay(1000); 
}
