/*  File Name: LAB6c.cpp
    Author: Kamden Edens
    Date: February 28, 2022
    Purpose: Introduces the use of buttons
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

 //Prepares the user for the game 
 lcd.cls(); 
 lcd.printf("Ready?");
 lcd.printf("\n3...");
 wait_ms(1000);
 lcd.printf("2...");
 wait_ms(1000);
 lcd.printf("1...");
 wait_ms(1000);
 //checks for if the buttons are pressed
 lcd.cls();
 lcd.printf("Reading Switches");
 wait_ms(1000); // time delay of 1 while checking for inputs
 
 bool switch5 = sw5;
 bool switch4 = sw4;
 //checks the buttons
 if ((switch5 == 1) && (switch4 == 1)) {
     lcd.printf("Both Pressed!");
     led0 = true;
     led1 = true;
 }
 else if (switch5 == 1) {
     lcd.printf("sw5 pressed!");
     led0 = true;
 }
 else if (switch4 == 1) {
     lcd.printf("sw4 pressed!");
     led1 = true;
 }
 else {
     lcd.printf("No input!");
 }
 wait_ms(5000); // time delay of 5 seconds after checking for the response
 lcd.cls();
 led0 = false;
 led1 = false;
 lcd.printf("Goodbye..."); // is left on the screen after the program ends
 wait_ms(1000);
 lcd.cls();
 return 0; 
}