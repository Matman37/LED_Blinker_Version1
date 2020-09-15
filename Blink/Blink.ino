void setup() {
  pinMode(3, OUTPUT);
  #define grueneLED 3
}

void loop() {
  digitalWrite(grueneLED, HIGH); 
  delay(1000);                  
  digitalWrite(grueneLED, LOW);
  delay(1000);                       
}
