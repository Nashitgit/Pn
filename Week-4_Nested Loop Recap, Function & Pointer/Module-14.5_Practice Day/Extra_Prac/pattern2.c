/*
  ***********
   *********
    *******
     *****
      ***
       *

*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = 0;
    int star = (2*n)-1;


    for (int i = 1; i <= n+1/2; i++)
    {
        for (int j = 1; j <= space; j++ )
        {
            printf(" ");
        }
        for (int k = 1; k <=star; k++)
        {
            printf("*");
        }
        printf("\n");
        space++;
        star-=2;
        
    }
    return 0;
}