#define LED1 13
#define LED2_R 9
#define LED2_G 10

void setup () {
  pinMode(LED1, OUTPUT);
  pinMode(LED2_R, OUTPUT);
  pinMode(LED2_G, OUTPUT);
  

}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
  
  digitalWrite(LED2_R, HIGH);
  delay(1000);
  digitalWrite(LED2_R, LOW);
  delay(1000);

  digitalWrite(LED2_G, HIGH);
  delay(1000);
  digitalWrite(LED2_G, LOW);
  delay(1000);
}
