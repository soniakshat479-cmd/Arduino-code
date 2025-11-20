#define ledPin 13

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {  // Checks whether data is coming from the serial port
      String command = Serial.readString();   // Reads the data from the serial port
    Serial.println(command);
    if (command == 'ON1') {
      digitalWrite(ledPin, LOW); 
      Serial.print("led off");
      delay(100); // Turn LED OFF
    } else if (command == 'OFF1') {
      digitalWrite(ledPin, HIGH);
      Serial.print("led on");
      delay(100);
     
    }
  }
}
