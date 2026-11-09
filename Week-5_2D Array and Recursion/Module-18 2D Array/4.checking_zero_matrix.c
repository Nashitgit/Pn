// row * column = total value কয়টা আছে matrixএ
//0 কয়টা আছে matrixএ
// check total value == number of 0

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

    int total_val = r * c;
    int zero_cnt = 0;
     for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            if (a[i][j] == 0)
            {
                zero_cnt++;
            }
        }
    }

    if (total_val == zero_cnt)     
    {
        printf("This is a Null matrix");
    }
    else
    {
        printf("This is not a Null matrix");
    }
}