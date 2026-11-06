//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-10/challenges/pattern-2-21-4/problem?isFullScreen=true

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num = 1;
    int space = n-1;
    for (int i = 1; i <=n; i++) 
    {
        for (int j = 1; j <= space; j++) 
        {
            printf(" ");
        }
        for (int k = num; k >= 1; k--) 
        {
            printf("%d",k);
        }
        printf("\n");
        num++; 
        space--; 
    }
    return 0;
}