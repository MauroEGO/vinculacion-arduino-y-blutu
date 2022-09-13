//Variable que toma el numero de pin del led

int led_1 = 22;

char valor;  //Variable para el blutu

void setup() {

  pinMode(led_1, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available())  //Si el puerto serie (Bluetooth) está disponible
  {
    valor = Serial.read();  //Se le da a valor el dato de Bluetooth

    if (valor == 'A')   //Si el dato que llega es una A
    {
      digitalWrite(led_1, HIGH);  //Enciende el LED 1
    }
    if (valor == 'B')   //Si el dato que llega es una B
    {
      digitalWrite(led_1, LOW);   //Apaga el LED 1
    }
  }
}
