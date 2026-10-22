// Práctica 2 · LED con pulsador
// Placa: Arduino UNO
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LED = 12;      // LED en D12
const int BOTON = 2;     // pulsador en D2 (con resistencia pull-down de 10 kΩ)

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
