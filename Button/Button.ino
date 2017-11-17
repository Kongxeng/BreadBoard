#define INPIN 7
#define OUTPIN 13

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(OUTPIN, OUTPUT);
  pinMode(INPIN, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  bool button;
  button = digitalRead(INPIN);
  digitalWrite(OUTPIN, button);   
}
