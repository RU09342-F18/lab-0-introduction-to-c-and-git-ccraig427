#include <stdio.h> //defines variable types, macros, and functions for input/output 
#include <math.h> //initiates the math library

int main() 
{ 
  int math(int num1, int num2, char Operator) //declare inputs and case argument
  { 
    switch(Operator) //initiate case decision based on an operator symbol input
    { 
      case '+' : return(num1+num2); //adds the integers and returns value
        break; 
      case '-' : return(num1-num2); //subtracts the integers and returns value
        break;
      case '*' : return(num1*num2); //multiplies the integers and returns value
        break;
      case '/' : return(num1/num2); //divides the integers and returns value
        break;
      case '%' : return(num1%num2); //performs modulus and returns value
        break;
      case '<' : return(num1<<num2); //left shifts the bits of the first integer by the bits of the second integer
        break;
      case '>' : return(num1>>num2); //right shifts the bits of the first integer by the bits of the second integer
        break;
      case '&' : return(num1&num2); //bit by bit AND
        break;
      case '|' : return(num1|num2); //bit by bit OR
        break;
      case '^' : return(num1^num2); //bit by bit XOR
        break;
      case '~' : return(~num1); //integer 1 negation 
        break;
      default: printf("Operator Input Invalid"); //gives error message if operator invalid
    }
  }
  return 0;
}
      
      
      
