/*
Diagonal Matis: কর্ণ বরাবর value বাকি সব 0 . Primary Diagonal Matrix, Secondary matrix

- square matrix হতে হবে
- কর্ণ বাদে বাকি সব 0

- i==j হলে diagonal এর উপরে আছি

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
                if (i == j)  //diagonal 
                {
                    
                }
                else        //outside diagonal : diagonal এর বাইরে সবগুলো 0 হতে হবে
                {
                    if (a[i][j] != 0) 
                    {
                        printf("This is Not Primary diagonal Matrix");
                        is_diagonal = false;
                    }
                }
            }
        }
        ///
        if (is_diagonal == true)
        {
            printf("Primary Diagonal Matrix");
        }
    }
    else
    {
        printf("This is Not Primary diagonal Matrix");
    }

    return 0;
}