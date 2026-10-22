// Práctica 3 · Zumbador (melodía Do-Re-Mi-Do)
// Placa: Arduino UNO
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int ZUMBADOR = 8;   // zumbador pasivo en D8

void setup() {
  pinMode(ZUMBADOR, OUTPUT);
}

void loop() {
  tone(ZUMBADOR, 523, 500);  // DO
  delay(500);
  tone(ZUMBADOR, 587, 500);  // RE
  delay(500);
  tone(ZUMBADOR, 659, 500);  // MI
  delay(500);
  tone(ZUMBADOR, 523, 500);  // DO
  delay(500);
  delay(1000);               // pausa antes de repetir
}
