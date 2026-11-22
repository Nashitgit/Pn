#include<stdio.h>
int main()
{
    int a = 16;
    float b = 5; //for division purpose at least a variable number should be float
    int c = 2;

    int sum = a + b;
    printf("Summation = %d\n", sum);

    int sub = a - b;
    printf("Subtraction = %d\n", sub);

    int mul = a * b;
    printf("Multiplication = %d\n", mul);

    float div = a / c / b;
    printf("Division = %.2f\n", div);

    return 0;
}