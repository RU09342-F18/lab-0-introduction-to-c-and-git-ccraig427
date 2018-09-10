/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 10, 2018
 *      Author: Colin Craig
 */

/* The domain of operators the math.c file can support are listed below: 
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

#ifndef MATH_H_
#define MATH_H_

/*Below is the function call and structure for the math.c file, 
        (Integer 1, Integer 2, Operator) 
  An example function call is listed below: 
  int math (10, 5, +); */

int math(int num1, int num2, char Operator);

int num1; 
int num2; 
char Operator; 

#endif /* MATH_H_ */
