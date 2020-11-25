#include "mbed.h"

BusOut myleds(LED1, LED2, LED3, LED4, p5, p6, p7, p8);


int main() {
    while (1) {
     for (int i = 0; i < 255; i++){

         if (i % 2 == 1){
           myleds = 0b10101010;
             wait(0.25);
         }


           else {
           myleds = 0b01010101;
           wait(0.25);
           }
    }
}
}
