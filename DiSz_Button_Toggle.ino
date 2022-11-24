int Toggle_pin = 15;  //D8
int delay_value = 1000;

void setup() {
  pinMode(Toggle_pin, INPUT);

}

void loop() {
  int button_state = digitalRead(Toggle_pin);

// NOTE: The button State will need to the opposite for each board.
//       i.e S2 mini: button_state == HIGH
//           D1 mini: button_state == LOW

  if (button_state == HIGH) {

    //button press's will be acknowledged and executed;

  } else {

    delay(delay_value);

  }

}
