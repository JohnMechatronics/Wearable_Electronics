
int heaterPin = 1;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(heaterPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(heaterPin, HIGH);   // turn heater ON
                   
}
