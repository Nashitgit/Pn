// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if (n % 2 == 0)
//     {
//         printf("Even Number");
//     }
//     else
//     {
//         printf("Odd Number");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    

    for (int i = 0; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d - Even\n", i);
        }
        else
        {
            printf("%d - Odd\n", i);
        }
    }

    return 0;
}