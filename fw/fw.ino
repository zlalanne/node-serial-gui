
void setup() { 
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
} 

void loop() { 
  unsigned char value = random(0,100);
  Serial.println(String(value, DEC));
  delay(2000);
}
