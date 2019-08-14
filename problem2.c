#include <stdio.h>
#include <conio.h>


/*

Create a program that would calculate the tax of the user using the following equation:

Total Tax = Initial Tax - Exemptions

The initial tax would be dependent on the income of the user using the ff

Income Bracket - Initial Tax
below 100,001 - 5% of the income
100,001 - 250,000 - 10%
250,001 - 500,000 - 15%
above 500,000 - 20%

Exemptions of 10,000 per dependents for a MAXIMUM of 5 dependents. (Ex. 3 dependents = 30000; 5 dependents = 50000; 12 dependents = 50000)

If the total tax is a negative, convert it to 0;

*/


void main() {

    float income, initTax,  totalTax, excemptions;
    int noDependents;

    printf("Input your income: ");
    scanf("%f", &income);

    if(income < 100001) {
      initTax = income *.5;
    } else if ( income <= 250000 ) {
      initTax = income *.10;
    }else if ( income <= 500000 ) {
      initTax = income *.15;
    } else {
      initTax = income *.20;
    }

    printf("Input dependents count: ");
    scanf("%d", &noDependents);

    if (noDependents > 5) {
        excemptions = 50000;
    } else {
        excemptions = 10000*noDependents;
    }


    totalTax = initTax-excemptions;

    if (totalTax <= 0) {
        totalTax = 0;
    }


    printf("%.2f   Excemptions \n" , excemptions);
    printf("%.2f Inital Tax \n" , initTax);
    printf("%.2f Total Tax" , totalTax);


}

