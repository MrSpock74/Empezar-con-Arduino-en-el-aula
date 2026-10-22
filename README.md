# Empezar con Arduino en el aula

Curso para profesorado de Tecnología con **trece prácticas** de iniciación a Arduino. Esta versión renovada usa **Arduino UNO** y la **ESP32 STEAMakers**, con programación en bloques con [STEAMakersBlocks](https://www.steamakersblocks.com) y código C++ para el Arduino IDE.

Autor: **Manuel Romero Fraidía** (Departamento de Tecnología, IES Murillo, Sevilla), a partir de las prácticas del grupo de trabajo «Empezar con Arduino en el aula» (Tecnología, 2018).

📖 **Curso en línea:** [`docs/index.html`](docs/index.html) · <https://mrspock74.github.io/Empezar-con-Arduino-en-el-aula/> .

## Estado

| Prácticas | Estado |
|---|---|
| 1 Hola mundo · 2 LED + pulsador · 3 Zumbador · 4 LED + potenciómetro · 5 LED RGB · 6 LDR · 9 Ultrasonidos HC-SR04 | **Actualizadas** (UNO y ESP32, bloques y código) |
| 7 · 8 · 10 · 11 · 12 · 13 | En actualización. Siguen disponibles en su versión original de 2018 |

## Qué contiene cada práctica actualizada

- Montaje en protoboard y esquema eléctrico para **Arduino UNO** y **ESP32 STEAMakers**, con tabla de pines y variante para la shield **Imagina TdR STEAM**.
- Programa en **bloques** de STEAMakersBlocks (capturas reales del editor) y en **código** `.ino`.
- Retos de ampliación, criterios de observación para evaluar, errores frecuentes y orientaciones de aula (parejas con roles rotativos, bloques o código según el nivel).

## Carpetas

| Carpeta | Contenido |
|---|---|
| `docs/` | Páginas del curso (HTML autocontenido; funcionan sin conexión salvo las fuentes). |
| `codigo/` | Sketches de Arduino IDE; cada carpeta lleva el nombre de su `.ino`. |
| `imagenes/bloques/` | Capturas de los programas en bloques, reutilizables. |
| `imagenes/montajes/` | Vistas de montaje en protoboard: Fritzing del grupo de 2018 (UNO, prácticas 1 y 2) y SVG propios editables. |
| `prácticas con arduino/` | Las trece prácticas originales de 2018 en PDF (versión Arduino UNO / Arduino IDE). |

### Sketches

| Sketch | Placa |
|---|---|
| `p01_hola_mundo_uno` | Arduino UNO |
| `p01_hola_mundo_esp32` | ESP32 STEAMakers |
| `p02_pulsador_uno` | Arduino UNO |
| `p02_pulsador_esp32` | ESP32 STEAMakers |
| `p09_ultrasonidos_uno` | Arduino UNO |
| `p09_ultrasonidos_esp32` | ESP32 STEAMakers |
| `p09b_alarma_uno` | Arduino UNO |
| `p09b_alarma_esp32` | ESP32 STEAMakers |
| `p03_zumbador_uno` | Arduino UNO |
| `p03_zumbador_esp32` | ESP32 STEAMakers |
| `p04_led_potenciometro_uno` | Arduino UNO |
| `p04_led_potenciometro_esp32` | ESP32 STEAMakers |
| `p05_led_rgb_uno` | Arduino UNO |
| `p05_led_rgb_esp32` | ESP32 STEAMakers |
| `p06_ldr_uno` | Arduino UNO |
| `p06_ldr_esp32` | ESP32 STEAMakers |
| `p06b_farola_uno` | Arduino UNO |
| `p06b_farola_esp32` | ESP32 STEAMakers |

## Equivalencia de pines (ESP32 STEAMakers)

La placa sigue el formato del UNO: usa los mismos nombres de pin (D2, D3…). En código de Arduino IDE hay que usar el número de **GPIO**:

| Pin | D2 | D3 | D5 | D6 | D8 | D9 | D10 | D12 | D13 | A0 | A1 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| Arduino UNO | 2 | 3 | 5 | 6 | 8 | 9 | 10 | 12 | 13 | A0 | A1 |
| ESP32 STEAMakers | 26 | 25 | 16 | 27 | 12 | 13 | 5 | 19 | 18 | 2 | 4 |

La ESP32 trabaja con lógica de **3,3 V**: alimenta potenciómetros y divisores con 3V3. El sensor HC-SR04 devuelve 5 V por ECHO y necesita un divisor de tensión (1 kΩ + 2 kΩ). A0 y A1 de la ESP32 STEAMakers son del conversor ADC2 y dejan de funcionar si se usa el WiFi.

## Licencia y créditos

© 2026 Manuel Romero Fraidía. Licencia [Creative Commons Atribución-NoComercial-CompartirIgual 4.0 (CC BY-NC-SA 4.0)](https://creativecommons.org/licenses/by-nc-sa/4.0/deed.es); consulta `LICENSE`. Los integrantes del grupo de trabajo de 2018 autorizaron modificar las prácticas originales y cambiar su licencia (antes GPL-3.0).

- Las capturas de bloques proceden del editor de demostración de STEAMakersBlocks.
- Los montajes de Arduino UNO de las prácticas 1 y 2 están hechos con Fritzing por el grupo de trabajo de 2018; el resto son vistas SVG propias.
- Autoría de las prácticas originales de 2018: 1, 2 y 9, Manuel Romero Fraidía; 3, Mónica Cañón Pascual; 4 y 5, Dolores Nieves Díaz Luna; 6, Juan Antonio Perez (pueden verse en cada página).
- Arduino, ESP32 y las demás marcas pertenecen a sus titulares; este material no está afiliado a ellos.

## Recursos relacionados

- [ESP32-STEAMakers](https://fgcoca.github.io/ESP32-STEAMakers/) y [Guía fundamental de la ESP32 STEAMakers](https://fgcoca.github.io/Guia_fundamental_ESP32_STEAMakers/), de Federico Coca.
- [Arduino TdR STEAM](https://pedroruizf.github.io/arduino_tdr_steam/index.html), curso de Pedro Ruiz (CC BY-SA 4.0).
