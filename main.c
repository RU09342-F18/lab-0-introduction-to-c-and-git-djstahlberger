/*
 * math.h
 *
 *  Created on: Sep 10, 2018
 *  Last Edited: Sep 10, 2018
 *      Author: DJ Stahlberger
 */

/*
 *
 *  This Program is a calculator implementing the following functions:
 *  + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1)
 *
 */

#include math.h
 int math (int num1, int num2, char operator){

     switch(operator){ //switch statement used to determine between the different functions

     case '+':
         return num1 + num2; //returns num1 + num2 if a '+' is entered
     case '-':
         return num1 - num2; //returns num1 - num2 if a '-' is entered
     case '*':
         return num1 * num2; //returns num1 * num2 if a '*' is entered
     case '/':
         return num1 / num2; //returns num1 / num2 if a '/' is entered
     case '%':
         return num1 % num2; //returns num1 % num2 if a '%' is entered
     case '<':
         return num1 << num2;//returns num1 shifted left by num2 if a '<' is entered
     case '>':
         return num1 >> num2;//returns num1 shifted right by num2 if a '>' is entered
     case '&':
         return num1 & num2; //returns the result of ANDing num1 & num2 if a '&' is entered
     case '|':
         return num1 | num2; //returns the result of ORing num1 & num2 if a '|' is entered
     case '^':
         return num1 ^ num2; //returns the result of XORing num1 & num2 if a '^' is entered
     case '~':
         return ~num1; //returns the inverse of num1 if a '~' is entered

     default:
         return 0; //returns a 0 if operator doesn't match any of the case statements

     }
 }
