// C++ code
//
void setup()
{
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 Serial.begin(9600); Serial.println("I'm OK");
}

void loop()
{ 
 if(Serial.available())
 {
 int i= Serial.read()-'0';
 if(i==1){
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 }
 if(i==2){
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
 }
 if(i==3){
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
 }
 if(i==4){
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 }
 if(i==5){
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 }
 if(i==6){
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 }
 if(i==7){
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 }
 if(i==8){
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 }
 if(i==9){
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 }
 }
}
