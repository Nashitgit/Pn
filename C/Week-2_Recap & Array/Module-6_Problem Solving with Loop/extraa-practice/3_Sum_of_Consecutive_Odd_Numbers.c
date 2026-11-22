#include<stdio.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
         int sum = 0;
        // printf("%d %d\n",x, y);
        for (int j=x+1; j <=y-1; j++){
            // printf("%d",j);
            if(j%2==1)
            {
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}