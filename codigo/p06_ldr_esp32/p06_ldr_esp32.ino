// Práctica 6 · Medir la luz con una LDR
// Placa: ESP32 STEAMakers
// Manuel Romero Fraidía · CC BY-NC-SA 4.0 · https://github.com/MrSpock74/Empezar-con-Arduino-en-el-aula

const int LDR = 4;      // A1 de la placa = GPIO 4 (LDR a 3V3 con divisor de 10 kΩ)

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(LDR));   // 0 (oscuridad) a 4095 (mucha luz)
  delay(300);
}
