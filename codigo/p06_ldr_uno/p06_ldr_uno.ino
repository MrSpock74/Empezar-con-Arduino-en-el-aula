// Práctica 6 · Medir la luz con una LDR
// Placa: Arduino UNO
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LDR = A1;      // LDR con divisor de 10 kΩ en A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(LDR));   // 0 (oscuridad) a 1023 (mucha luz)
  delay(300);
}
