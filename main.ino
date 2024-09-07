int R, G, B;

void setup() {
  R = 255;
  G = 0;
  B = 0;
  Serial.println("Sinal está Vermelho!");
  neopixelWrite(RGB_BUILTIN, R, G, B);
  delay(6000);
}

void loop() {


  // Transição de Vermelho para Verde
  if (R == 255 && G == 0) { 
    Serial.println("Sinal ficou Verde!");
    R = 0;
    G = 255;
    neopixelWrite(RGB_BUILTIN, R, G, B);
    delay(6000);

  }

  // Transição de Verde para o Amarelo 
  if (R == 0 && G == 255) {
    Serial.println("Sinal ficou Amarelo!");
    R = 255;
    neopixelWrite(RGB_BUILTIN, R, G, B);
    delay(6000);
  }

  // Transição de Amarelo para Vermelho
  if (R == 255 && G == 255) {
    Serial.println("Sinal ficou Vermelho!");
    G = 0;
    neopixelWrite(RGB_BUILTIN, R, G, B);
    delay(6000);
  }

}
