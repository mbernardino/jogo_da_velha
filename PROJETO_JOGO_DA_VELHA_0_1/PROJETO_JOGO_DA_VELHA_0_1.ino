/* PROJETO: JOGO DA VELHA*/

  const int LED_00 = 13;
  const int LED_01 = 12;
  const int BTN_00 = 2;
  const int BTN_01 = 3;
  int status_btn_00 = 0;
  int status_btn_01 = 0;

void setup() {
  pinMode(LED_00, OUTPUT);
  pinMode(BTN_00, INPUT);
  pinMode(LED_01, OUTPUT);
  pinMode(BTN_01, INPUT);
}

void loop() {
  
  status_btn_00 = digitalRead(BTN_00);
  status_btn_01 = digitalRead(BTN_01);
  
    if(status_btn_00 == HIGH){
      digitalWrite(LED_00, HIGH);
    } else {
      digitalWrite(LED_00, LOW);
    }

   if(status_btn_01 == HIGH){
     digitalWrite(LED_01, HIGH);  
   } else {
     digitalWrite(LED_01, LOW); 
   }
   
}



