// 
//Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

#include <stdio.h>
void my_abs(int n)
{
    if (n < 0)
    {
        n = n * (-1);
    }
    printf("%d", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}