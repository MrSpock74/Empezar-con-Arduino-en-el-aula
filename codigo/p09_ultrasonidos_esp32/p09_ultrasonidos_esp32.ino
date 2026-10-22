// Práctica 9 · Distancia con HC-SR04 (ECHO con divisor de tensión)
// Placa: ESP32 STEAMakers
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int TRIG = 25;     // D3 de la placa = GPIO 25
const int ECHO = 16;     // D5 de la placa = GPIO 16 (con divisor 1 kΩ / 2 kΩ)

float medirDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duracion = pulseIn(ECHO, HIGH, 30000);  // µs; 0 si no hay eco
  return duracion * 0.0343 / 2;                // cm
}

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  float cm = medirDistancia();
  Serial.println(cm);
  delay(500);
}
