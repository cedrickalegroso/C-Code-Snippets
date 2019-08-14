#include <stdio.h>
#include <conio.h>

/*

Create a program that would ask the user to enter his/her age. Then display the status based on the following table

0 - 12 - Child
13 - 17 - Teen
18 - 65 - Adult
66 - 120 - Senior
above 120 or below 0 - Invalid

c04_Lastname_Age.c

*/

void main() {

 int age;


 printf("Enter your age: ");
 scanf("%d", &age);

if (age <= 0 ) {
printf("INVALID");
}
 else if ( age <= 12 ) {
    printf("Child");
 } else if ( age <=17 ) {
    printf("Teen");
 } else if ( age <=65 ) {
    printf("Adult");
 } else if ( age <=120 ) {
    printf("Senior");
 } else if( age > 120 || age < 0 ) {
    printf("INVALID");
 }



}
