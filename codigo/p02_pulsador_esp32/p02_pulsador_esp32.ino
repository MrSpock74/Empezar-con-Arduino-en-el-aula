// Práctica 2 · LED con pulsador
// Placa: ESP32 STEAMakers
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LED = 19;      // D12 de la placa = GPIO 19
const int BOTON = 26;    // D2 de la placa = GPIO 26 (con pull-down de 10 kΩ, alimentado a 3V3)

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTON, INPUT);
}

void loop() {
  if (digitalRead(BOTON) == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
