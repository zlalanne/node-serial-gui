
void setup() { 
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
} 


void loop() { 

  uint8_t value = random(0,100);
  Serial.write(value);
  delay(2000);
  
}
