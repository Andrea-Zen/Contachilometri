# Progetto: Misurazione della Velocità di una Ruota con Sensore IR e Display LCD

Questo progetto utilizza un sensore IR e un display LCD per misurare la velocità di rotazione di una ruota. Il sensore IR rileva la rotazione della ruota, e la velocità viene calcolata in RPM (giri al minuto) e visualizzata su un display LCD a 16 pin.

## Componenti Necessari

- **Arduino UNO** (o altra scheda compatibile)
- **Sensore IR** (ad esempio, un sensore di interruzione del fascio o riflessione)
- **Display LCD 16x2** (o 20x4, a seconda della preferenza)
- **Cavi di collegamento**
- **Potenziometro 10kΩ** (per regolare il contrasto dell'LCD)

## Collegamenti Hardware

### Collegamenti LCD (16x2 a 16 pin)
| Pin LCD | Descrizione  | Collegamento ad Arduino  |
|---------|--------------|--------------------------|
| 1       | VSS          | GND                      |
| 2       | VDD          | 5V                       |
| 3       | V0           | Potenziometro (per contrasto) |
| 4       | RS           | Pin 7                    |
| 5       | RW           | GND                      |
| 6       | E            | Pin 8                    |
| 11      | D4           | Pin 9                    |
| 12      | D5           | Pin 10                   |
| 13      | D6           | Pin 11                   |
| 14      | D7           | Pin 12                   |
| 15      | LED+         | 5V (con resistenza da 220Ω) |
| 16      | LED-         | GND                      |

### Collegamenti Sensore IR
| Pin Sensore IR | Collegamento ad Arduino |
|----------------|-------------------------|
| VCC            | 5V                      |
| GND            | GND                     |
| OUT            | Pin 2 (Digital Input)   |

> Nota: Il potenziometro è utilizzato per regolare il contrasto del display LCD (collegato tra V0 e GND dell'LCD).****
