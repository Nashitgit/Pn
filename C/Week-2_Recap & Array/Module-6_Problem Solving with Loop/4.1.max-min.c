// if input is negative then solution
// we have to set max the lowest negative integer value
//INT_MIN = lowest integer value stored

#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN; //lowest integer value
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

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int min = INT_MAX; //Highest integer value
//     for (int i = 1; i <= n; i++)
//     {
//         int val;
//         scanf("%d", &val);
//         if (val < min)
//         {
//             min = val;
//         }
        
//     }
//     printf("%d", min);
    
//     return 0;
// }
