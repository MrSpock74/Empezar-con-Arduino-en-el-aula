// Práctica 6 · Farola automática con LDR
// Placa: ESP32 STEAMakers
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LDR = 4;      // A1 de la placa = GPIO 4 (LDR a 3V3 con divisor de 10 kΩ)
const int LED = 19;      // D12 de la placa = GPIO 19, LED de la farola
const int UMBRAL = 30;  // por debajo de este porcentaje de luz, se enciende

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int luz = map(analogRead(LDR), 0, 4095, 0, 100);   // porcentaje de luz
  Serial.println(luz);
  if (luz < UMBRAL) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(100);
}
