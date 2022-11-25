int Toggle = 2;
int LED  = 12;
int delay_value = 1000;

void setup() {
  pinMode(Toggle, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
    int button_state = digitalRead(Toggle);

// NOTE: The button State will need to the opposite for the code on each board.
//       i.e S2 mini: button_state == HIGH
//           D1 mini: button_state == LOW

  if (button_state == HIGH) {
    delay_value = 1000;
    digitalWrite(LED, HIGH);
    delay(delay_value);
    digitalWrite(LED, LOW);
    delay(delay_value);

  } else {
    delay_value = 100;
    digitalWrite(LED, HIGH);
    delay(delay_value);
    digitalWrite(LED, LOW);
    delay(delay_value);
  }

}
