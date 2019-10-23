//NOTE: This Code has not yet been fully completed and still does not include all functionality.

#include <Window.h>

Window firstWindow(2,3);
Window secondWindow(10,11);
Window thirdWindow(0,1);
Window fourthWindow(12,13);
void setup() {
  

}

void loop() {
  
  firstWindow.openWindow();
  //secondWindow.openWindow();
  //thirdWindow.openWindow();
  boolean opened = false;
  if(random(1) == 1){
   thirdWindow.openWindow(); 
    opened = true;
  }
  
  fourthWindow.openWindow();
  delay(5000);
  firstWindow.closeWindow();
  secondWindow.closeWindow();
  //thirdWindow.closeWindow();
  
  if (opened){
   thirdWindow.closeWindow(); 
  }
  
  fourthWindow.closeWindow();
  delay(5000);
  
  
}


