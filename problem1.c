



#include <stdio.h>

//Declaration of function fun1
void fun1(double *smp, double *lgp);
/*
 AUTHOR: SUCHITH CHANDAN REDDY PINREDDY
 FILENAME: problem1.c
 SPECIFICATION: THE PROGRAM SWAPS THE NUMBER IF THE FIRST NUMBER IS GREATER THAN THE SECOND NUMBER.
 FOR: CS 2413 Data Structures Section 002
*/
int main (void) {
    double num1, num2, num3;
    printf("Enter 3 numbers separated by blanks> ");
    scanf("%lf%lf%lf",&num1,&num2,&num3);
    fun1(&num1,&num2);
    fun1(&num1,&num3);
    fun1(&num2,&num3);
    printf("The numbers are: %.2f %.2f %.2f\n", num1, num2, num3);
    return (0);
}

/*
    NAME: fun1
    PARAMETERS: Double data type Pointers *smp and *lgp
    PURPOSE: The function swaps the numbers in lowest to greatest in the pointers
    PRECONDITION: The parameter of this function is to input the address of the double data type variable
    POSTCONDITION: The value will swap if the *smp (small number pointer) is greater than *lgp (large number pointer)
*/
void fun1 (double *smp, double *lgp) { //*smp small number pointer *lgp large number pointer
    double temp;
    if (*smp > *lgp) {
    temp=*smp;
    *smp=*lgp;
    *lgp=temp;
    }
}

/*
ANSWERS:
-----> 1B Answer:
//Declaration of function fun1
void fun1(double *smp, double *lgp);
//Main Function
int main (void) {
    double num1, num2, num3;
    printf("Enter 3 numbers separated by blanks> ");
    scanf("%lf%lf%lf",&num1,&num2,&num3);
    fun1(&num1,&num2);
    fun1(&num1,&num3);
    fun1(&num2,&num3);
    printf("The numbers are: %.2f %.2f %.2f\n", num1, num2, num3);
    return (0);
}
//Fun1 Function
void fun1 (double *smp, double *lgp) {
    double temp;
    if (*smp > *lgp) {
    temp=*smp;
    *smp=*lgp;
    *lgp=temp;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
----->Code Runs:
Enter 3 numbers separated by blanks> 78
56
41
The numbers are: 41.00 56.00 78.00
The code is sorting the numbers inputed in lowest to greatest using pointers
--------------------------------------------------------------------------------------------------------------------------------------
-----> 1C Answer:
//Declaration of function fun1
void fun1(double smp, double lgp);
//Main Function
int main (void) {
    double num1, num2, num3;
    printf("Enter 3 numbers separated by blanks> ");
    scanf("%lf%lf%lf",&num1,&num2,&num3);
    fun1(num1,num2);
    fun1(num1,num3);
    fun1(num2,num3);
    printf("The numbers are: %.2f %.2f %.2f\n", num1, num2, num3);
    return (0);
}
//Fun1 Function
void fun1 (double smp, double lgp) {
    double temp;
    if (smp > lgp) {
    temp=smp;
    smp=lgp;
    lgp=temp;
    }
}
-------------------------------------------------------------------------------------------------------------------------------------
--------->Code Runs
Enter 3 numbers separated by blanks> 98
104
1
The numbers are: 98.00 104.00 1.00
-------------------------------------------------------------------------------------------------------------------------------------
---------->Explanation:
The code does not sort the numbers due to the loss of pointers since program cannot use memory allocation which makes main function
variables not to link with the fun1 variable causing numbers to not change.
--------------------------------------------------------------------------------------------------------------------------------------
*/
