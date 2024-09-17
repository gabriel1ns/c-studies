#include <stdlib.h>
#include <stdio.h>

int main()
{
    // arithmetic sequence

    /* int n;
    int finalNumber;

    printf("Define n:");
    scanf("%d", &n);

    finalNumber = 1 + (n - 1) * 2;

    printf("%d", finalNumber);

    return 0;
 */

    // sum of an arithmetic sequence

    // this time i will create a fully user generated sequence

   /*  int d, finalNumber, firstNumber, n, sumofsequence;

    printf("Define the first number:");
    scanf("%d", &firstNumber);

    printf("Define distance:");
    scanf("%d", &d);

    printf("Define the postion of the last number:");
    scanf("%d", &n);

    finalNumber = firstNumber + (n -1) * d;
    sumofsequence = (firstNumber + finalNumber) * (n / 2);

    printf("The sum of the sequence is %d", sumofsequence); */

    
    // employee salary calculator

    int hours;
    double hourlysalary, finalpay;

    printf("How much is your hourly salary?");
    scanf("%lf", &hourlysalary);

    printf("How many hours you've worked this month:");
    scanf("%d", &hours);

    finalpay = hours * hourlysalary;
    printf("Your final pay is: %.2lf", finalpay);

}