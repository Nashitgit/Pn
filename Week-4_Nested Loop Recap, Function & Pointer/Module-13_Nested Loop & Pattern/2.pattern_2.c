#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;  //// কারণ  star print হবে input এর size থেকে
    for (int i = 1; i <= n; i++) //for printing line
    {
        for (int j = 1; j <=star; j++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        star--; //প্রতি লাইনে ১টি করে star কমছে
    }
    return 0;
}