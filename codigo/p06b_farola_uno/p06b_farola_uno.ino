// Práctica 6 · Farola automática con LDR
// Placa: Arduino UNO
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LDR = A1;      // LDR con divisor de 10 kΩ en A1
const int LED = 12;      // LED de la farola
const int UMBRAL = 30;  // por debajo de este porcentaje de luz, se enciende

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int luz = map(analogRead(LDR), 0, 1023, 0, 100);   // porcentaje de luz
  Serial.println(luz);
  if (luz < UMBRAL) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(100);
}
