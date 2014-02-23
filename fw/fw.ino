
signed short LastValue = 50;

void setup() { 
  //Initialize serial and wait for port to open:
  Serial.begin(9600);  
} 

void loop() { 
  LastValue += random(-5, 5);
  if(LastValue == 100) {
    LastValue = 100;
  } else if(LastValue <0) {
    LastValue = 0;
  }
  Serial.print(String(LastValue, DEC));
  delay(100);
}
