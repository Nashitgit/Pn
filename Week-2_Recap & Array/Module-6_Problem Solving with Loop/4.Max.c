// in this probelm if input is less than 0 that means negative then it will not show real answer. solved in

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

