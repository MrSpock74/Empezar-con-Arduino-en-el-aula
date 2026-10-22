// Práctica 4 · Brillo de un LED con potenciómetro
// Placa: ESP32 STEAMakers (núcleo ESP32 3.x)
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LED = 25;      // D3 de la placa = GPIO 25
const int POT = 2;       // A0 de la placa = GPIO 2 (potenciómetro alimentado a 3V3)

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int lectura = analogRead(POT);              // 0 a 4095
  int brillo = map(lectura, 0, 4095, 0, 255); // PWM: 0 a 255
  analogWrite(LED, brillo);
}
