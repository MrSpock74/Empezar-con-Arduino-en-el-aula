# Empezar con Arduino en el aula

Curso para profesorado de Tecnología con **trece prácticas** de iniciación a Arduino. Esta versión renovada usa **Arduino UNO** y la **ESP32 STEAMakers**, con programación en bloques con [STEAMakersBlocks](https://www.steamakersblocks.com) y código C++ para el Arduino IDE.

Autor: **Manuel Romero Fraidía** (Departamento de Tecnología, IES Murillo, Sevilla), a partir de las prácticas del grupo de trabajo «Empezar con Arduino en el aula» (Tecnología, 2018).

📖 **Curso en línea:** [`docs/index.html`](docs/index.html) · <https://mrspock74.github.io/Empezar-con-Arduino-en-el-aula/> .

## Estado

| Prácticas | Estado |
|---|---|
| 1 Hola mundo · 2 LED + pulsador · 9 Ultrasonidos HC-SR04 | **Actualizadas** (UNO y ESP32, bloques y código) |
| 3 · 4 · 5 · 6 · 7 · 8 · 10 · 11 · 12 · 13 | En actualización. Siguen disponibles en su versión original de 2018 |

## Qué contiene cada práctica actualizada

- Esquema de conexión para **Arduino UNO** y **ESP32 STEAMakers** (protoboard), con tabla de pines y variante para la shield **Imagina TdR STEAM**.
- Programa en **bloques** de STEAMakersBlocks (capturas reales del editor) y en **código** `.ino`.
- Retos de ampliación, criterios de observación para evaluar, errores frecuentes y orientaciones de aula (parejas con roles rotativos, bloques o código según el nivel).

## Carpetas

| Carpeta | Contenido |
|---|---|
| `docs/` | Páginas del curso (HTML autocontenido; funcionan sin conexión salvo las fuentes). |
| `codigo/` | Sketches de Arduino IDE; cada carpeta lleva el nombre de su `.ino`. |
| `imagenes/bloques/` | Capturas de los programas en bloques, reutilizables. |
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

## Equivalencia de pines (ESP32 STEAMakers)

La placa sigue el formato del UNO: usa los mismos nombres de pin (D2, D3…). En código de Arduino IDE hay que usar el número de **GPIO**:

| Placa | D2 | D3 | D5 | D12 | D13 |
|---|---|---|---|---|---|
| Arduino UNO | 2 | 3 | 5 | 12 | 13 |
| ESP32 STEAMakers | 26 | 25 | 16 | 19 | 18 |

La ESP32 trabaja con lógica de **3,3 V**. El sensor HC-SR04 devuelve 5 V por ECHO y necesita un divisor de tensión (1 kΩ + 2 kΩ).

## Licencia y créditos

© 2026 Manuel Romero Fraidía. Licencia [Creative Commons Atribución-NoComercial-CompartirIgual 4.0 (CC BY-NC-SA 4.0)](https://creativecommons.org/licenses/by-nc-sa/4.0/deed.es); consulta `LICENSE`. Los integrantes del grupo de trabajo de 2018 autorizaron modificar las prácticas originales y cambiar su licencia (antes GPL-3.0).

- Las capturas de bloques proceden del editor de demostración de STEAMakersBlocks.
- Arduino, ESP32 y las demás marcas pertenecen a sus titulares; este material no está afiliado a ellos.

## Recursos relacionados

- [ESP32-STEAMakers](https://fgcoca.github.io/ESP32-STEAMakers/) y [Guía fundamental de la ESP32 STEAMakers](https://fgcoca.github.io/Guia_fundamental_ESP32_STEAMakers/), de Federico Coca.
- [Arduino TdR STEAM](https://pedroruizf.github.io/arduino_tdr_steam/index.html), curso de Pedro Ruiz (CC BY-SA 4.0).
