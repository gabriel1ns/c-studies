#include <stdlib.h>
#include <stdio.h>
 #include <math.h>

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

    /* int hours;
    double hourlysalary, finalpay;

    printf("How much is your hourly salary?");
    scanf("%lf", &hourlysalary);

    printf("How many hours you've worked this month:");
    scanf("%d", &hours);

    finalpay = hours * hourlysalary;
    printf("Your final pay is: %.2lf", finalpay); */

    // hours, minutes and seconds

/*     int seconds;
    int hours, minutes, remainingseconds;

    printf("Please enter the number of seconds:");
    scanf("%d", &seconds);

    hours = (seconds / 3600);
    minutes = (seconds - hours * 3600) / 60;
    remainingseconds = (seconds - hours * 3600) % 60;

    printf("%d seconds is %d hours, %d minutes and %d seconds", seconds, hours, minutes, remainingseconds); 
 */

    // removing decimal part
/* 
    float data, decimalpart;

    printf("Enter a floating point number:");
    scanf("%f", &data);

    decimalpart = data - (int)data;
    printf("%.2f", decimalpart); */

    // sum of triple digits

  /*   int num, digit1, digit2, digit3, remainder,  sum;
    printf("Enter a triple digit numbers:\n");
    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num - (digit1 * 100) ) / 10;
    remainder = num % 100;
    digit3 = remainder % 10;

    sum = digit1 + digit2 + digit3;

    printf("The sum of the digits of %d is  %d\n" , num, sum);

    return 0; */

    // reversing number

    /* int num, digit1, digit2, digit3;
    

    printf("Enter a triple digit number:");
    scanf("%d", &num);
    
    digit1 = num / 100;
    digit2 = (num - (digit1 * 100) ) / 10;
    digit3 = (num % 100) % 10;

    printf("\nReversing %d --> %d%d%d", num, digit3, digit2, digit1); */

   // distance of 2 points

    float x1, x2, y2, firstmber, secondmber;
    float y1;
    float distance;

    firstmber = x1 - x2;
    secondmber = y1 - y2;

    printf("Enter x1:");
    scanf("%f", &x1);

    printf("Enter y1:");
    scanf("%f", &y1);

    printf("Enter x2:");
    scanf("%f", &x2);

    printf("Enter y2:");
    scanf("%f", &y2);

    distance = sqrt((firstmber * firstmber) + (secondmber * secondmber));
    printf("Distance -> %.2f", distance);

    
}