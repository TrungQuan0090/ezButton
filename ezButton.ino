#include <ezButton.h>

ezButton button(7);  // create ezButton object that attach to pin 7;

void setup() {
  Serial.begin(9600);
  button.setDebounceTime(100); // set debounce time to 100 milliseconds
 
  button.setCountMode(COUNT_FALLING);
}

void loop() {
  button.loop(); // MUST call the loop() function first

  unsigned long count = button.getCount(); // dem so lan nhan 
  
  Serial.println(count);

  if(count >= 100)
    button.resetCount(); 

  
}
