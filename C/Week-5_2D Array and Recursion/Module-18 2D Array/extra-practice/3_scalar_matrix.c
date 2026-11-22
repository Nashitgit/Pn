//Take input a matrix and check if it’s a scalar matrix or not. 

//square matrix -> diagonal -> scalar (diagonally all element same)

#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if ( i == j)  //diagonal
                {
                    if (a[i][j] != a[0][0])
                    {                      
                        flag = 0;
                    }
                }
                else  //outside diagonal
                {
                    if (a[i][j] != 0)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if (flag == 1)
        {
            printf("Scalar Matrix");
        }
        else
        {
            printf("This is not scalar matrix");
        }
    }
    else
    {
        printf("This is not scalar matrix");
    }

    return 0;
}