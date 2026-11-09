// have to print given input row only. (Specific row print). vice versa for column

// row এর value পেতে লুপ চালাতে হবে column এ । কারন row তে column value থাকে । row তে লুপ চালালে সবগুলো row print হয়ে যাবে

/**
 * input:

3 4
1 2 3 2
4 5 6 3
7 8 9 3
1       -  row
0       - column

 */

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

    int specific_row;
    scanf("%d", &specific_row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[specific_row][i]); // row এর index fixed. change শুধু column
    }
    printf("\n");

    int specific_column;
    scanf("%d", &specific_column);
    for (int i = 0; i < r; i++)
    {
        printf("%d\n",a[i][specific_column]);
    }

    return 0;
}