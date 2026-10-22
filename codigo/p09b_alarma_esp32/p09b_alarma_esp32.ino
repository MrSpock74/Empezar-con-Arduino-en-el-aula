// Práctica 9 · Alarma de proximidad (ECHO con divisor de tensión)
// Placa: ESP32 STEAMakers
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int TRIG = 25;     // D3 de la placa = GPIO 25
const int ECHO = 16;     // D5 de la placa = GPIO 16 (con divisor 1 kΩ / 2 kΩ)
const int LED = 19;      // LED de la alarma, D12 de la placa = GPIO 19
const float UMBRAL = 15; // cm

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
  pinMode(LED, OUTPUT);
}

void loop() {
  float cm = medirDistancia();
  Serial.println(cm);
  // cm > 0 evita que «sin eco» (0) active la alarma
  if (cm > 0 && cm < UMBRAL) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(100);
}
