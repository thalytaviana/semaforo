void setup()
{
  pinMode(21, OUTPUT); // LED verde
  pinMode(22, OUTPUT); // LED amarelo
  pinMode(23, OUTPUT); // LED vermelho
  pinMode(32, OUTPUT); // buzzer
}

void loop()
{
  // Controle do LED verde
  digitalWrite(21, HIGH); // acende o LED verde
  delay(2000); // deixa aceso por 2 segundos
  digitalWrite(21, LOW); // apaga o LED verde

  // Controle do LED amarelo
  digitalWrite(22, HIGH); // acende o LED amarelo
  delay(2000); // deixa aceso por 2 segundos
  
  // Piscar o LED vermelho junto com o LED verde aceso
  for (int i = 0; i < 6; i++) { // 6 piscadas de 500ms cada (total de 3 segundos)
    digitalWrite(23, HIGH); // acende o LED vermelho
    delay(250); // mantém aceso por 250ms
    digitalWrite(23, LOW); // apaga o LED vermelho
    delay(250); // permanece apagado por 250ms
  }
  
  digitalWrite(22, LOW); // apaga o LED amarelo

  // Controle do LED vermelho
  digitalWrite(23, HIGH); // acende o LED vermelho
  digitalWrite(32, HIGH); // aciona o buzzer
  delay(3000); // deixa aceso por 3 segundos
  digitalWrite(23, LOW); // apaga o LED vermelho
  digitalWrite(32, LOW); // desliga o buzzer
  // no total deixa o led vermelho ligado por 6s
}
