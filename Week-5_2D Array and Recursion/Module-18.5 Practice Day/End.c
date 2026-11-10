#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;   //left index
    int j = n-1; //last  index
    while (i <= j)
    {
        printf("%d ",a[i]);
        i++;

        if (i <= j)
        {
            printf("%d ", a[j]);
            j--;
        }
    }

    return 0;
}