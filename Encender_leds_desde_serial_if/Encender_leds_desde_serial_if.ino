int led1= 2;
int led2= 3;
int led3= 4;
char input;

void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0)
{
  input = Serial.read();
  

  if(input == '1')
  {
    digitalWrite(led1, HIGH);
    Serial.println(input);
    Serial.println("Led 1 Encendido");
    
    }
    if(input == '2')
  {
    digitalWrite(led2, HIGH );
    Serial.println(input);
    Serial.println("Led 2 Encendido");
    
    }
    if(input == '3')
  {
    digitalWrite(led3, HIGH);
    Serial.println(input);
    Serial.println("Led 3 Encendido");
    }
     if(input == '4'){
      digitalWrite(led1, LOW);
      Serial.println(input);
      Serial.println("Led 1 Apagado");
      }
      if(input == '5'){
      digitalWrite(led2, LOW);
      Serial.println(input);
      Serial.println("Led 2 Apagado");
      }
      if(input == '6'){
      digitalWrite(led3, LOW);
      Serial.println(input);
      Serial.println("Led 3 Apagado");
      }
    if(input == 'a')
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    Serial.println(input);
    Serial.println("Leds apagados");
    
    }
if(input == 'e')
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    Serial.println(input);
    Serial.println("Leds Encendidos");
    
    }
  
  
  }
}
