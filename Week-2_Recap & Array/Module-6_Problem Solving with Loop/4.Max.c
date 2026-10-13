// in this probelm if input is less than 0 that means negative then it will not show real answer. example 4.1.c file

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
        
    }
    printf("%d", max);
    
    return 0;
}

