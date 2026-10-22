// Práctica 4 · Brillo de un LED con potenciómetro
// Placa: Arduino UNO
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LED = 3;       // LED en D3 (pin PWM)
const int POT = A0;      // potenciómetro en A0

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int lectura = analogRead(POT);              // 0 a 1023
  int brillo = map(lectura, 0, 1023, 0, 255); // PWM: 0 a 255
  analogWrite(LED, brillo);
}
