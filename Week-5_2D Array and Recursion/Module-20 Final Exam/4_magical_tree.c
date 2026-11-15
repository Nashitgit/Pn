//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-cc-10/challenges/magical-tree-3/problem?isFullScreen=true



#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int rows = (n + 11) / 2;

    int space = rows - 1;
    int star = 1;

    // Print tree
    for (int i = 0; i < rows; i++)
    {
        // Spaces
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        // Stars
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        printf("\n");

        space--;
        star += 2;
    }

    // Print trunk
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
