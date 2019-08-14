#include <stdio.h>
#include <conio.h>

/*

Create a program that would ask for 3 numbers then display the largest among the three.

Ex. Enter 3 numbers: 9 56 3
The largest is 56.

Enter 3 numbers: 28 17 23
The largest is 28.

Enter 3 numbers: 9 3 11
The largest is 11.

*/

void main() {

    int num1, num2, num3, highest;

    printf("Enter 3 number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ( num1 >= num2 && num1 >= num3 ) {
        highest =  num1;
    } else if ( num2 >= num1 && num2 >= num3 ) {
        highest =  num2;
    } else if ( num3 >= num1 && num3 >= num2 ) {
        highest =  num3;
    }

    printf("The largest is %d.",  highest);


}

