//Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  

#include<stdio.h>
int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d %d", b,a);
}