/* PROJETO: JOGO DA VELHA*/

// etapa 01: ligar um LED usando um botão

  const int LED_00 = 13;
  const int BTN_00 = 2;
  int status_btn_00 = 0;

void setup() {
  pinMode(LED_00, OUTPUT);
  pinMode(BTN_00, INPUT);
}

void loop() {
  status_btn_00 = digitalRead(BTN_00);
  if(status_btn_00 == HIGH){
      digitalWrite(LED_00, HIGH);
    } else {
      digitalWrite(LED_00, LOW);
    } 
}



