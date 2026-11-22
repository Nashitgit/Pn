
#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c]; // 2D array declare

    for (int i = 0; i < r; i++) // for row
    {
        for (int j = 0; j < c; j++) // for column
        {
            scanf("%d ", &a[i][j]);
        }
    }

    if (c == 1)     // column এর মান 1 হলেই column matrix
    {
        printf("This is a column matrix");
    }
    else
    {
        printf("This is not a column matrix");
    }
}