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
    

    for (int i = 1; i <= 10; i++)
    {
        if(i == 5){
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}