int led1= 2;
int led2= 3;
int led3= 4;
char input;

void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
Serial.begin(9600);

}

void loop() {
if (Serial.available() > 0)
{
  input = Serial.read();


switch (input){

    case '1':
    digitalWrite(led1, HIGH);
    Serial.println(input);
    Serial.println("Led 1 Encendido");
    break;

    case '2':
    digitalWrite(led2, HIGH );
    Serial.println(input);
    Serial.println("Led 2 Encendido");
    break;

    case '3':
    digitalWrite(led3, HIGH);
    Serial.println(input);
    Serial.println("Led 3 Encendido");
    break;
     case '4':
    digitalWrite(led1, LOW);
    Serial.println(input);
    Serial.println("Led 1 Apagado");
    break;
     case '5':
    digitalWrite(led2, LOW);
    Serial.println(input);
    Serial.println("Led 2 Apagado");
    break;
     case '6':
    digitalWrite(led3, LOW);
    Serial.println(input);
    Serial.println("Led 3 Apagado");
    break;

    case 'a':
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    Serial.println(input);
    Serial.println("Leds apagados");
    break;

    case 'e':
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    Serial.println(input);
    Serial.println("Leds Encendidos");
    break;

    default:
    Serial.println(input);
    break;
    
    }
}
}
