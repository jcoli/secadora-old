/**
Version: 0a
Tecnocoli - 02/2022
jcoli - Jeferson Coli - jcoli@teccnocoli.com.br
Mega2560 - Dryer
**/
#include <Arduino.h>
#include "io_defines.h"
#include "defines.h"

void digital_output_begin();


void digital_output_begin(){
    pinMode(OUPS1, OUTPUT);
    pinMode(OUPT1, OUTPUT);
    pinMode(OUPT2, OUTPUT);
    pinMode(OUHT1, OUTPUT);
    pinMode(OULI3, OUTPUT);
    pinMode(OUCL1, OUTPUT);
    pinMode(OUCL2, OUTPUT);
    pinMode(OUCL3, OUTPUT);
    pinMode(OULI1, OUTPUT);
    pinMode(OULI2, OUTPUT);
    digitalWrite(OUPS1, HIGH);
    digitalWrite(OUPT1, HIGH);
    digitalWrite(OUPT2, HIGH);
    digitalWrite(OUHT1, HIGH);
    digitalWrite(OUCL1, HIGH);
    digitalWrite(OUCL2, HIGH);
    digitalWrite(OUCL3, HIGH);
    digitalWrite(OULI1, HIGH);
    digitalWrite(OULI2, HIGH);
    digitalWrite(OULI3, HIGH);

}