#include "config.h"

void initGamepad(int* pinQueue, int* keyQueue, int* statePool) {
  int index = 0;
  pinQueue[index++] = PIN_ARROW_UP;
  keyQueue[index] = KEY_ARROW_UP;
  pinMode(PIN_ARROW_UP, INPUT_PULLUP);
  pinQueue[index++] = PIN_ARROW_DOWN;
  keyQueue[index] = KEY_ARROW_DOWN;
  pinMode(PIN_ARROW_DOWN, INPUT_PULLUP);
  pinQueue[index++] = PIN_ARROW_LEFT;
  keyQueue[index] = KEY_ARROW_LEFT;
  pinMode(PIN_ARROW_LEFT, INPUT_PULLUP);
  pinQueue[index++] = PIN_ARROW_RIGHT;
  keyQueue[index] = KEY_ARROW_RIGHT;
  pinMode(PIN_ARROW_RIGHT, INPUT_PULLUP);
  pinQueue[index++] = PIN_SELECT;
  keyQueue[index] = KEY_SELECT;
  pinMode(PIN_SELECT, INPUT_PULLUP);
  pinQueue[index++] = PIN_START;
  keyQueue[index] = KEY_START;
  pinMode(PIN_START, INPUT_PULLUP);
  pinQueue[index++] = PIN_LEFT;
  keyQueue[index] = KEY_LEFT;
  pinMode(PIN_LEFT, INPUT_PULLUP);
  pinQueue[index++] = PIN_RIGHT;
  keyQueue[index] = KEY_RIGHT;
  pinMode(PIN_RIGHT, INPUT_PULLUP);
  pinQueue[index++] = PIN_A;
  keyQueue[index] = KEY_A;
  pinMode(PIN_A, INPUT_PULLUP);
  pinQueue[index++] = PIN_B;
  keyQueue[index] = KEY_B;
  pinMode(PIN_B, INPUT_PULLUP);
  pinQueue[index++] = PIN_X;
  keyQueue[index] = KEY_X;
  pinMode(PIN_X, INPUT_PULLUP);
  pinQueue[index++] = PIN_Y;
  keyQueue[index] = KEY_Y;
  pinMode(PIN_Y, INPUT_PULLUP);
  for (index=0;index<42;++index) {
    statePool[index] = HIGH;
  }
}

