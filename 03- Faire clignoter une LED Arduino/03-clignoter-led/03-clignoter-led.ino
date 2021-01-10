/*
  Blink - Clignote
  Allume une led pendant une seconde, puis l'éteint pendant une seconde, ainsi de suite.
  Ce code est tiré du tutoriel : https://www.electronique-kit.com/faire-clignoter-une-led
  Ce code d'exemple est dans le domaine publique
*/
 

// Le setup sera executé seulement au démarrage de l'Arduino
void setup() {              
  // Initialise la pin 8 sur laquelle est branchée la LED comme une sortie (OUTPUT)
  pinMode(8, OUTPUT);     
}

// La routine du loop se répète à l'infini
void loop() {
  digitalWrite(8, HIGH);     // Allume la LED (HIGH est le niveau de tension)
  delay(1000);               // Attendre 1000ms = 1s
  digitalWrite(8, LOW);      // Eteint la LED en mettant la tension à LOW
  delay(1000);               // Attendre 1000ms = 1s
}
