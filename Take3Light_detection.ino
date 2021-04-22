
#define PIN_A 0
#define PIN_D 2
 
void setup() 
{
  Serial.begin(9600);
}
 
void loop() 
{
  int val;
  val=analogRead(PIN_A);
  val= map(val,0,1023,99,0);
  Serial.print("a:");
  Serial.print(val);
  Serial.print(", d:");
  val=digitalRead(PIN_D);
  Serial.println(val);
  delay(500);
}
