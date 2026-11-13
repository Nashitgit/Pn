//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W


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

    for (int i = 0; i < r; i++)  // row change হচ্ছে না, column reverse ভাবে print 
    {
        for (int j = c-1; j >= 0; j--) // column change হবে
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}