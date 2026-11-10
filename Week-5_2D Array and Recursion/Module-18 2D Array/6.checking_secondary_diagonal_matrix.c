/*
Secondary Diagonal Matrix
- square matrix হতে হবে
- secondary কর্ণ বাদে বাকি সব 0

- i+j = row-1 or col-1 হলে diagonal এর উপরে আছি

*/


#include <stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c]; 

    for (int i = 0; i < r; i++) // for row
    {
        for (int j = 0; j < c; j++) // for column
        {
            scanf("%d ", &a[i][j]);
        }
    }

    bool is_diagonal = true;

    if (r == c)     //checkng square matrix
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // if (i + j == r -1 )  //diagonal 
                // {
                    
                // }

                if (i + j != r -1 )         
                {
                    if (a[i][j] != 0) 
                    {
                        printf("This is Not Secondary diagonal Matrix");
                        is_diagonal = false;
                    }
                }
            }
        }
        ///
        if (is_diagonal == true)
        {
            printf("Secondary Diagonal Matrix");
        }
    }
    else
    {
        printf("This is Not Secondary diagonal Matrix");
    }

    return 0;
}

