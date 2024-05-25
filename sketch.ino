#define leds 4
#define botao 15 

int azul[leds] = {23, 22, 21, 19};
int vermelho[leds] = {18, 17, 4, 2};


void setup() {
  for(int i = 0; i < leds; i++){
  pinMode(azul[i], OUTPUT);
  pinMode(vermelho[i], OUTPUT);
  }
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(botao) == HIGH){
    for (int i = 0; i < leds; i++){
      digitalWrite(azul[i], HIGH);
      digitalWrite(vermelho[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(azul[i], LOW);
      digitalWrite(vermelho[leds - 1 - i], LOW);
    }
  }
    for (int i = 0; i < leds; i++){
      digitalWrite(azul[i], HIGH);
      digitalWrite(vermelho[i], HIGH);
      delay(250);
      digitalWrite(azul[i], LOW);
      digitalWrite(vermelho[i], LOW);
  }
}


