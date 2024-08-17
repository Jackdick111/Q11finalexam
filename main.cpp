#include "mbed.h"


DigitalIn button(PC_13);  


DigitalOut led1(LED1); 
DigitalOut led2(LED2);  

int main() {
   
    led1 = 1;  // Turn ON LED1
    led2 = 0;  // Turn OFF LED2

    int flag = 0;  

    while (1) {  
        if (button == 0) {  
            if (flag == 0) {
                flag = 1;  
                // Toggle LEDs
                led1 = !led1;
                led2 = !led2;
            }
        } else {
            flag = 0;  
        }
    }
}