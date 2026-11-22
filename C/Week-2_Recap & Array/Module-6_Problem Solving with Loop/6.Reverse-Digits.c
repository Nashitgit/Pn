// printing digits reverse way
// suppose 5421 . to get last digit mod by 10. 5421%10 = 1. now we have to eliminate 1. so have to divide by 10. 5421/10 = 542 . now again 542 % 10 = 2 .....

// firstlhy mod then divide

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        // while (n != 0)  //if any input is 0 then it will not work. so have to use do while loop
        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while( n != 0);
        
        printf("\n");
    }

    return 0;
}