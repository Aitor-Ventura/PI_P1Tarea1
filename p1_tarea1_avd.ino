/* Programa que hace parpadear todos los segmentos del dígito
 *  de las unidades de forma indefinida parando 1 segundo
 */
void setup() {
  DDRA = B11111111;
  // Activamos PIN de las unidades
  pinMode(49, OUTPUT);
  // Lo encendemos
  digitalWrite(49, HIGH);
}

void loop() {
  PORTA = 0x3F;
  // Apagamos
  digitalWrite(49, LOW);
  // Esperamos
  delay(1000);
  // Encendemos
  digitalWrite(49, HIGH);
  delay(1000);
}
