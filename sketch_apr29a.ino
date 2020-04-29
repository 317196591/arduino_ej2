int estado=0;
int estadoAnterior=0;
int salida=0;
boolean estadoLED;
boolean estadoLED1;
void setup()
{
  pinMode(4,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop(){
   estado=digitalRead(4);
   estadoLED=digitalRead(8);
   estadoLED1=digitalRead(9);
   if(estado==1){
    salida=1-salida;
    delay(20);
   }
   if(salida==1)
   {  
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
    if((estado==1)&&(estadoLED==1)&&(estadoLED1==0))
    {
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
    }
    if((estado==1)&&(estadoLED1==1)&&(estadoLED==0))
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
    }
    if((estado==1)&&(estadoLED1==1)&&(estadoLED==1))
    {
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
    }
   }
}
