// technique to eliminate last digits: to eliminate any number have to divide by 10 and make it int. 0 depends on how many numbers we want to remove. suppose 4569, then have to divide 1000

//to get last digit have to mod(%) by 10.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int digit = n / 1000;

    if (digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}