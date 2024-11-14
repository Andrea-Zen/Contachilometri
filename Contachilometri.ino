              #include <Wire.h>
              #include <LiquidCrystal.h>

              // mettiamo i pin per lo schermo lcd da 2x16 da 
              LiquidCrystal lcd(1,2,3,4,5,6);

              //mettiamo il pin del sensore ir
              const int irPin (7);

              //inseriamo le variabili per il calcolo della velocità
              unsigned long lastTime = 0; //tempo dall'ultimo valore LOW (quindi ogni volta che il segnale viene interrotto)
              unsigned long currentTime;
              float rpm = 0;


              void setup() {
                //inizializiamo lo schermo
              lcd.begin(16, 2);
             

              // impsotiamo la modalità del pin del sensore ( nel nostro caso come pin di input)
              pinMode(irPin, INPUT);

              //inseriamo il messaggio iniziale che si leggerà sullo schermo
              lcd.setCursor(0, 0);
              lcd.print("Bentornato");

              }

              void loop() {
              //vediamo se il sensore rileva un'interruzione che verrà registrata come valore LOW
              if (digitalRead(irPin) == LOW) {
                //calcoliamo la velocità attuale
                currentTime = millis();
            // Calcola la differenza di tempo tra due impulsi
                unsigned long interval = currentTime - lastTime;

                // Evita di dividere per zero
                if (interval > 0) {
                  // Calcola RPM: (60 secondi * 1000 millisecondi) / (tempo per un giro in millisecondi)
                  rpm = (60.0 * 1000) / interval;

                  // Aggiorna l'ultimo tempo
                  lastTime = currentTime;

                  // Mostra la velocità su LCD
                  lcd.setCursor(0, 1);
                  lcd.print("RPM: ");
                  lcd.print(rpm);
                  lcd.print("   "); // Spazi per cancellare eventuali cifre residue
                }

                // Piccola pausa per evitare letture multiple dello stesso impulso
                delay(50);
              }
            }
