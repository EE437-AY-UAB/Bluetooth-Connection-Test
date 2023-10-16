#define ledPin 12
int data = 0;

void setup() {
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, LOW);
  Serial.begin(9600); // set data rate to 9600 baud for serial transmission
  // analogWrite(6, Contrast);
  // lcd.begin(16, 2);

}

void loop() {
  if(Serial.available() > 0) {
    data = Serial.read(); // reads data from serial 

    if (data == '0') {
      digitalWrite(ledPin, LOW); // turn LED off
      Serial.println("LED: OFF"); // prints "LED: OFF"
    }
    else if (data == '1') {
      digitalWrite(ledPin, HIGH); // Turn LED on
      Serial.println("LED: ON"); // prints "LED: ON"
    }
  }

}
