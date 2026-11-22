
/*
            *
           ***
          *****
         *******
          *****
           ***
            *

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= (2*n)-1; i++) // for printing line
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star-=2;
        }
        printf("\n");
    }

    return 0;
}