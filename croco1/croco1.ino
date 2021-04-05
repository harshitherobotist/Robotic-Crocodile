int m1_forward=7;
int m1_backward=8;
int m2_forward=12;
int m2_backward=13;
unsigned long start_time,end_time;
void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT); 
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
forward();
//backward();
//digitalWrite(13,HIGH);
// digitalWrite(8,HIGH);

}
void forward()
{
  
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
}
void backward()
{
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);
  digitalWrite(7,HIGH);
}
