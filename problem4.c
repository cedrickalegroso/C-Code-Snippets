#include <stdio.h>
#include <conio.h>


/*

Create a program that would ask the user for a simple equation. Then display the final answer.

Ex 1:
Enter an equation: 5 + 7
The answer is 12

Ex 2:
Enter an equation: 4 * 2
The answer is 8

*/


void main() {

  int num1, num2, answer;
  char operatorused;

  printf("Enter a equation: ");
  scanf( "%d %c %d", &num1 ,&operatorused, &num2);

        if ( operatorused == '+' ) {
             answer  = num1 + num2;
        } else if ( operatorused == '-' ) {
             answer  = num1 - num2;
        } else if ( operatorused == '*' ) {
             answer  = num1 * num2;
        } else if ( operatorused == '/' ) {
             answer  = num1 / num2;
        } else if ( operatorused == '%' ) {
             answer  = num1 % num2;
        }

  printf("The answer is %d", answer);

}
