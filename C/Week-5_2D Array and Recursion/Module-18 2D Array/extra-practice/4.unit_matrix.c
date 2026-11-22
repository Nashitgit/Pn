//Take input a matrix and check if it’s a unit matrix or not. 

//square matrix -> diagonal -> scalar (diagonally all element 1)


#include<stdio.h>
int main()
{
    int r,c;
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
                if (i == j)  //diagonal
                {
                    if (a[i][j] != 1)
                    {
                        flag = 0;
                    }
                }
                else        //outside diagonal
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
            printf("Unit Matrix");
        }
        else
        {
            printf("This is not a Unit Matrix");
        }
    }
    else
    {
        printf("This is not a Unit Matrix");
    }

    return 0;
}