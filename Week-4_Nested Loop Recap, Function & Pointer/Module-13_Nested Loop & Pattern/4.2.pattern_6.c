/*

1
1 2
1 2 3 
1 2 3 4

*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    for (int i = 1; i <= n; i++) //for printing lines
    {
        for (int j = 1; j <=val; j++) ////for printing number
        {
            printf("%d ",j);
        }
        printf("\n");
        val++;
    }
    return 0;
}