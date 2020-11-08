#define RM_PWM 6
#define LM_PWM 5
#define RM1 7
#define RM2 8
#define LM1 3
#define LM2 4
char a='S';
void setup() {
  Serial.begin(9600);
  pinMode(RM_PWM,OUTPUT);
  pinMode(LM_PWM,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);

  
  digitalWrite(RM1,LOW);
  digitalWrite(LM1,LOW);
  digitalWrite(RM2,LOW);
  digitalWrite(LM2,LOW);
  analogWrite(RM_PWM,90);
  analogWrite(LM_PWM,90);
  while(!Serial.available())
  {}
}
void loop() {
  
   a=Serial.read();
//  Serial.println(a);
  
  if(a=='f')
  {  
     digitalWrite(LM1,HIGH);
     digitalWrite(RM2,HIGH);
     digitalWrite(LM2,LOW);
     digitalWrite(RM1,LOW);
  }
  else if(a=='r') 
  { 
    digitalWrite(LM1,HIGH);
    digitalWrite(RM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(LM2,LOW);
  }
  else if(a=='l')
  { 
    digitalWrite(RM2,HIGH);
    digitalWrite(RM1,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,HIGH);
  }
  else if(a=='s'){
    a=='S';
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(LM2,LOW);
  }
// delay(100);
}
