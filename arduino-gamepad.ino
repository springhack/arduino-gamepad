#include "config.h"

int statePool[42] = { HIGH };
int pinQueue[12];
int keyQueue[12];

void setup() {
  Keyboard.begin();
  initGamepad(pinQueue, keyQueue, statePool);
}

void loop() {
  for (int i=0;i<12;++i) {
    int state = digitalRead(pinQueue[i]);
    if (statePool[i] != state) {
      statePool[i] = state;
      switch (state) {
        case LOW:
          Keyboard.press(keyQueue[i]);
          break;
        case HIGH:
        default:
          Keyboard.release(keyQueue[i]);
      }
    }
  }
  delay(DELAY);
}
