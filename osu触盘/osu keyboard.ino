#include <Keyboard.h>
const int LED = 10;
void setup ()
{
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
}

void loop ()
{
  if (digitalRead(A0) == 1) {
    Keyboard.press('E');
    Keyboard.write('E');
  }
  else {
    Keyboard.press(0);
  }
  if (digitalRead(A1)  == 1) {
    Keyboard.press('F');
    Keyboard.write('F');
  }
  else {
    Keyboard.press(0);
  }
  if (digitalRead(A2) == 1) {
    Keyboard.press('J');
    Keyboard.press('J');
  }
  else {
    Keyboard.press(0);
  }
  if (digitalRead(A3) == 1) {
    Keyboard.press('I');
    Keyboard.write('I');
  }
  else {
    Keyboard.press(0);
  }

  delay(5);
  Keyboard.release(0);
}

