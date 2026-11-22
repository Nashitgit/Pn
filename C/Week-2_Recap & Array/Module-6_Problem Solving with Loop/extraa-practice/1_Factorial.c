// #include<stdio.h>
// int main()
// {
//     int n,x;
//     scanf("%d",&n);
//     int fct = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d",&x);
//         fct = fct * i;

//     }
//     printf("%d", fct);

//     return 0;
// }

//  ___________________factorial___________
// #include<stdio.h>
// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     int fct = 1;
//     for ( i = 1; i <= n; i++)
//     {
//         fct = fct * i;
//     }
//     printf("%d", fct);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, j;
    int n, i;
    scanf("%d", &a);
    for (j = 1; j <= a; j++)
    {
        scanf("%d", &n);

        long long int fct = 1; //will reset factorial for each number

        for (i = 1; i <= n; i++)
        {
            fct = fct * i;
        }
        printf("%lld\n", fct);
    }

    return 0;
}