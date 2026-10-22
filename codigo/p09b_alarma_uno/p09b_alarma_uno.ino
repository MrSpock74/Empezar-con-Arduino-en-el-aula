// Práctica 9 · Alarma de proximidad
// Placa: Arduino UNO
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int TRIG = 3;
const int ECHO = 5;
const int LED = 12;        // LED de la alarma
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
