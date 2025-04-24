int potenciometro = 0;
int velocidade = 0; 

void setup() {
  
  const int PT_1 = A0;    // Pino do potenciometro
  const int PTPin1 = 9;   // pino controlador 1
  const int PTPin2 = 10;  // pino controlador 2
  const int inicia = 6;   // (PWM pin)

  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(iniciaPin, OUTPUT);
}

void loop() {
 potenc = analogRead(PT_1); // lê o valor do sensor

 velocidade = map(potenc, 0, 1023, 0, 255); // define valores de velocidade

  // controle do potenciometro na esteira
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(iniciaPin, velocidade);

  delay(100); // controle da velocidade
}