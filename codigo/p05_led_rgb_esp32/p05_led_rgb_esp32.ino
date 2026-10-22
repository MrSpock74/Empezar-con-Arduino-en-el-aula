// Práctica 5 · LED RGB de cátodo común
// Placa: ESP32 STEAMakers (núcleo ESP32 3.x)
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int ROJO = 27;    // D6 de la placa = GPIO 27
const int VERDE = 13;   // D9 de la placa = GPIO 13
const int AZUL = 5;    // D10 de la placa = GPIO 5

// Pone el LED RGB (cátodo común) al color indicado: cada valor va de 0 a 255
void color(int rojo, int verde, int azul) {
  analogWrite(ROJO, rojo);
  analogWrite(VERDE, verde);
  analogWrite(AZUL, azul);
}

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
}

void loop() {
  color(255, 0, 0);   // rojo
  delay(1000);
  color(0, 255, 0);   // verde
  delay(1000);
  color(0, 0, 255);   // azul
  delay(1000);
}
