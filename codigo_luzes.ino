  int a1 = 13;
  int a2 = 12;
  int a3 = 11;
  int a4 = 10;
  int a5 = 9;
  int a6 = 8;
  int estrela = 7;
  int alcacuz = 6;
  int arv2 = 5;
  int muro = 4;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(a3,OUTPUT);
  pinMode(a4,OUTPUT);
  pinMode(a5,OUTPUT);
  pinMode(a6,OUTPUT);
  pinMode(estrela,OUTPUT);
  pinMode(alcacuz,OUTPUT);
  pinMode(arv2,OUTPUT);
  pinMode(muro,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(estrela,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(a3,HIGH);
  digitalWrite(a5,HIGH);
  delay(2000);
  digitalWrite(a2,HIGH);
  digitalWrite(a4,HIGH);
  digitalWrite(a6,HIGH);
  digitalWrite(a1,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(muro,HIGH);
  delay(2000);
  
  digitalWrite(a2,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a6,LOW);
  digitalWrite(a1,HIGH);
  digitalWrite(a3,HIGH);
  digitalWrite(a5,HIGH);
  digitalWrite(alcacuz,HIGH);
  delay(2000);
  digitalWrite(alcacuz,LOW);
  digitalWrite(arv2,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  delay(1000);
  digitalWrite(a1,LOW);
  digitalWrite(a2,HIGH);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  delay(1000);
  
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,HIGH);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  delay(1000);
  
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,HIGH);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  delay(1000);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,HIGH);
  digitalWrite(a6,LOW);
  delay(1000);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,HIGH);
  delay(1000);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  digitalWrite(muro,LOW);
  digitalWrite(alcacuz,LOW);
  digitalWrite(arv2,LOW);
  delay(2000);
  
  digitalWrite(a1,HIGH);
  digitalWrite(a2,HIGH);
  digitalWrite(a3,HIGH);
  digitalWrite(a4,HIGH);
  digitalWrite(a5,HIGH);
  digitalWrite(a6,HIGH);
  digitalWrite(muro,HIGH);
  digitalWrite(alcacuz,HIGH);
  digitalWrite(arv2,HIGH);
  delay(2000);
  
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  digitalWrite(muro,LOW);
  digitalWrite(alcacuz,LOW);
  digitalWrite(arv2,LOW);
  digitalWrite(estrela,LOW);
  delay(1000);
}
