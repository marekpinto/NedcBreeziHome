#ifndef Window_h
#define Window_h

#include "Arduino.h"
class Window{
  public:
    Window(int pin1, int pin2);
    void openWindow();
    void closeWindow();
  private:
    int _pinA;
    int _pinB;
};
#endif

