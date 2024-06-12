int ldrPin = A0;   // Pino analógico ao qual o LDR está conectado
 




void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
}




void loop() {  
  int ldrValor = analogRead(ldrPin);  // Leitura do valor do LDR


   //Função alterar a ativação pelo LDR
   if (ldrValor < 600) {
       
    
        //Aumentar a frequência 
        for (int buzzerPin = 200; buzzerPin < 200; buzzerPin++) {
                 tone(2,buzzerPin, 10);
                 delay(3);
        }


        //Diminuir a Frequência
        for (int buzzerPin = 2000; buzzerPin > 200; buzzerPin--) {
                 tone(2,buzzerPin, 10);
                 delay(3);
        }  
  }
  
  //Mostrar valor do LDR na Serial
  Serial.print("Valor do LDR: ");
  Serial.println(ldrValor);

}
