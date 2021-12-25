float ICahaya,Suhu,Beban,Cahaya,SuhuR,BebanM;
int led5 = 5;
int led6 = 6;
int led7 = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
}

void loop()
{
  
  Cahaya = analogRead(A0);
  Suhu =analogRead(A1);
  Beban = analogRead(A2);
  ICahaya = Cahaya * (5.0 / 1023.0);
  SuhuR = Suhu * (5.0 / 1023.0);
  BebanM = Beban * (5.0 / 1023.0);
  delay(250);
  if(ICahaya>1.67 && BebanM<=0 && SuhuR<52){
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
  }
  else if(ICahaya<=1.67 && BebanM<2.38 && SuhuR<0.26){
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
  }
  else if(ICahaya<=1.67 && BebanM<2.38 && SuhuR<0.26){
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,HIGH);
  }
  else if(ICahaya<=1.67 && BebanM<2.38 && SuhuR<0.26){
   digitalWrite(led5,HIGH);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
  }
  else if(ICahaya<=1.67 && BebanM<2.38 && SuhuR<0.26){
   digitalWrite(led5,HIGH);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
  }
  else if(ICahaya<=1.67 && BebanM<2.38 && SuhuR<0.26){
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,HIGH);
  }
  else{
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
  }
}
