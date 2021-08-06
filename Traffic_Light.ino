const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 8;
const int LED4 = 7;
const int LED5 = 4;
const int LED6 = 2;
const int LDR = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(analogRead(LDR) > 500)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED6,HIGH);
    delay(6000);
    digitalWrite(LED6,LOW);
  
    digitalWrite(LED5,HIGH);
    delay(1500);
    digitalWrite(LED5,LOW);
    digitalWrite(LED1,LOW);
    
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    delay(6000);
    digitalWrite(LED3,LOW);
    
    digitalWrite(LED2,HIGH);
    delay(1500);
    digitalWrite(LED2,LOW);
    digitalWrite(LED4,LOW);
    
    Serial.println("Day");
  }
  else
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED5,HIGH);
    delay(800);
    digitalWrite(LED5,LOW);
    digitalWrite(LED1,LOW);
    delay(600);

    Serial.println("Night");
  }

}
