/*
Have to print like this

    *
    **
    ***
    ****
    *****

*/

#include<stdio.h>
int main()
{
    int n, star = 1 ; // কারণ প্রতি লাইনে অন্তত ১টি star print হবে
    scanf("%d", &n); 
    for (int i = 0; i < n; i++)  //for printing line
    {
        for (int j = 1; j <= star; j++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        star++;  //প্রতি লাইনে ১টি করে star বাড়ছে
    } 
    
    return 0;
}