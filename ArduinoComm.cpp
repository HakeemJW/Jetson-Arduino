//#include <string>
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) 
  {
    String data = Serial.readStringUntil('\n');
    Serial.print("You sent me: ");
    Serial.println(data);
    if (data == 1)
    {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    else if (data == 0)
    {
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
