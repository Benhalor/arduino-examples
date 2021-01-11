/*
  Buzzer et bouton
  Lorsque le bouton est appuyé, allume le buzzer à une certaine fréquence. Lorsque le bouton
  est relaché, allume le buzzer à une fréquence différente.
  Ce code est tiré du tutoriel : https://www.electronique-kit.com/bouton-buzzer
  Ce code d'exemple est dans le domaine publique
*/

// On donne un nom aux pins
int pin_buzzer = 2;
int pin_bouton = 7;

// La partie setup est exécutée seulement une fois au démarrage de l'Arduino
void setup() {
  // La pin du buzzer est déclarée comme une sortie (OUTPUT)
  pinMode(pin_buzzer, OUTPUT);

  // La pin du bouton est déclarée comme une entée (INTPUT)
  pinMode(pin_bouton, INPUT);

}

void loop() {

  if (digitalRead(pin_bouton) == LOW) { // Si le bouton est appuyé
    tone(pin_buzzer, 10, 1915); // Faire sonner le buzzer avec une fréquence de 10Hz (son grave), pendant une durée de 1915 millisecondes
    delay(4000);  // On attend 4 secondes

  }
  else { // Sinon, si le bouton est relaché
    tone(pin_buzzer, 52, 956); // Faire sonner le buzzer avec une fréquence de 52Hz (son plus aigu), pendant une durée de 956 millisecondes
    delay(4000);  // On attend 4 secondes

  }

}
