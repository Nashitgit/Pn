// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-10/challenges/pattern-255-1/problem?isFullScreen=true

#include <stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= hash; k++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        if (i <= n - 1)
        {
            space--;
            hash += 2;
        }
        else
        {
            space++;
            hash -= 2;
        }
        printf("\n");
    }

    return 0;
}