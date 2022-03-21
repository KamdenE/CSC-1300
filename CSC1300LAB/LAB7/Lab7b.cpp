/*  File Name: LAB7b.cpp
    Author: Kamden Edens
    Date: March 20, 2022
    Purpose: Introduces the use of the buzzer with buttons
    on the board.
*/
#include "mbed.h" 
#include "TTU_X031.h" 
#include "SevenSegmentLED.h" 
#include "TextLCD.h" 
 
TextLCD lcd(TextLCD::LCD_CURSOR_ON_BLINKING_ON); 

int main(){ 
    led0 = false; 
    led1 = false;
    int delay;
    bool switch5 = true;
    bool switch4 = true;
    //float f_value = pot.read(); // 0.0 <= f_value <= 1.0 



    do  {
        lcd.cls();
        lcd.printf("4: Con. 5: Dis.");
        lcd.printf(" Both to quit.");
        wait_ms(100);
        lcd.cls();
        switch5 = true;
        switch4 = true;

        // switch 4
        if ((sw4) && !(sw5)) {
            wait_ms(500);
            lcd.printf("Continous Buzz!");
            lcd.printf(" sw4 to stop");
            while (switch4) {
                wait_us(100);
                float f_value = pot.read();
                delay = f_value * 955 + 956;
                speaker = 1;  //click the buzzer 
                wait_us(delay);  //delay is an integer value (number of microseconds to wait) 
                speaker = 0; //turn the buzzer off 
                wait_us(delay);  //wait again!
                if (sw4) {
                    switch4 = false;
                    wait_ms(500);
                }
            }
        };

        // switch 5
        if ((sw5) && !(sw4)) {
            wait_ms(500);
            lcd.printf("discrete Buzz!");
            lcd.printf("  sw5 to stop");
            while (switch5) {
                wait_us(100);
                float f_value = pot.read();
                delay = f_value * 955 + 956;
                speaker = 1;  //click the buzzer 
                wait_us(delay);  //delay is an integer value (number of microseconds to wait) 
                speaker = 0; //turn the buzzer off 
                wait_us(delay);  //wait again!
                if (sw5) {
                    switch5 = false;
                    wait_ms(500);
                }
            }
        };
        

    } while (!(sw4) && !(sw5)); // checks for both being pressed


    lcd.printf("Goodbye... "); // is left on the screen after the program ends
    wait_ms(1000);
    lcd.cls();
    return 0; 
    }