int led = 9; // LED connectée à la broche 9
int brightness = 0; // Valeur de luminosité
int fadeAmount = 50; // Valeur de variation de luminosité
int counter=0;
void allume(){
  digitalWrite(led, HIGH); 
  Serial.println("Allumée -2404071!!");
  delay(2000);
}
void clignoter(){
     if(counter<5){  // le plafond de 7/2 =4 +1 =5;ben 5 clignotement
  Serial.println("Clignote -2404071!!"); 
    digitalWrite(led, LOW);
    delay(250);
    digitalWrite(led, HIGH); 
    delay(250);
    counter++; 
    Serial.println(counter);  
}
}
void intensite(){
//intensité    
   analogWrite(led, brightness); // Change la luminosité de la LED
   brightness = brightness + fadeAmount; // Change la valeur de luminosité
   // Inverse la variation de luminosité quand la valeur de luminosité atteint 0 ou 255
    Serial.println("Intensité -2404071");
   if (brightness <=0 || brightness >=255 ) {
    fadeAmount = -fadeAmount;
    }    
    delay(2048);
    }

void eteindre(){
   digitalWrite(led, LOW);
  Serial.println("Éteindre -2404071");
  // Attend 2 millisecondes avant de recommencer
  delay(2000);
  Serial.println();
}

void setup() {
  pinMode(led, OUTPUT); // Définit la broche 9 en mode sortie
  Serial.begin(9600);
}

void loop() {
  counter = 0;
 //Utilisation des fonctions
   allume(); 
    while( counter <5){ 
      clignoter(); 
    }
 intensite();
 eteindre();

 // Manuelement faites
 
 /* 
 digitalWrite(led, HIGH); 
  Serial.println("Allumée -2404071!!");
  delay(2000);
  
  if(led){
    while(counter<5){
    //clignote
    Serial.println("Clignote -2404071!!"); 
    digitalWrite(led, LOW);
    delay(250);
    digitalWrite(led, HIGH); 
    delay(250);
    counter++; 
    Serial.println(counter);  
    if(counter==5){
      //intensité    
    digitalWrite(led, HIGH); 
   analogWrite(led, brightness); // Change la luminosité de la LED
   brightness = brightness + fadeAmount; // Change la valeur de luminosité
   // Inverse la variation de luminosité quand la valeur de luminosité atteint 0 ou 255
    Serial.println("Intensité -2404071");
   if (brightness <=0 || brightness >=255 ) {
    fadeAmount = -fadeAmount;
    }    
    delay(2048);
  }
  }
    counter=0;
  }
  digitalWrite(led, LOW);
  Serial.println("Éteindre -2404071");
  // Attend 2 millisecondes avant de recommencer
  delay(2000);
  Serial.println();
 */
}
