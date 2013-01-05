#include <Esplora.h>

void setup(){
  Serial1.begin(9400);
}

void loop(){
  if (Serial1.available() > 0){
    String Input = Serial1.readStringUntil(';');
    if (Input == "Select"){
      Esplora.writeBlue(255);
    }
    if (Input == "Start"){
      Esplora.writeRed(255);
    }
  }
  else 
    Esplora.writeRGB(0,0,0);   
}
  
