const int motor = 6; //PWM --> base of Tip122, collector of Tip122

void setup(){
Serial.begin(9600);

  int start_val = 0;
  int end_val = 10;

  for(int i = start_val; i <= end_val; i++) {
    Serial.println(i);
    analogWrite(motor, 255);
    delay(1000);
  }
  analogWrite(motor, LOW);
}
void loop() {
  
}
