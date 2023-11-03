#include <Arduino.h>
#include <rd_bts.hpp>


/*Mapeamento de hard*/
#define bt1     18
#define bt2     19
#define out1    2
#define out2    4
#define out3    5

/*Declaração de Objetos*/
kb_rd myBts(bt1, bt2);

void setup() {
 
  //Serial.begin(9600);
 pinMode(out1, OUTPUT);
 pinMode(out2, OUTPUT);
 pinMode(out3, OUTPUT);

 digitalWrite(out1, HIGH);
 digitalWrite(out2, LOW);
 digitalWrite(out3, LOW);
}

void loop() {

  if (myBts.read_bt(0,130)) digitalWrite(out1, !digitalRead(out1));
  if (myBts.read_bt(1,130)) digitalWrite(out2, !digitalRead(out2));
  //Serial.println("LED está aceso. = "+ out1);
  
}

