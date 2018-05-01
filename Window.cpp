#include "Arduino.h"
#include "Window.h"

Window::Window(int pin1, int pin2){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
   _pinA = pin1;
   _pinB = pin2;
}
void Window::openWindow(){
  digitalWrite(_pinA, HIGH);
  digitalWrite(_pinB, LOW);
  delay(250);
  digitalWrite(_pinA, LOW);
  digitalWrite(_pinB, LOW);
}
void Window::closeWindow(){
  digitalWrite(_pinA, LOW);
  digitalWrite(_pinB, HIGH);
  delay(250);
  digitalWrite(_pinA, LOW);
  digitalWrite(_pinB, LOW);
}