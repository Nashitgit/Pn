// return_type function_name(parameters)
// {
//     return
// }
// int main()
// {

//     return 0;
// }

//

#include<stdio.h>
int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}
int sum(int num1, int num2)
{
    // printf("%d %d", num1, num2 );
    int ans = num1 + num2;
    return ans;
}

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);

    int val = sum(a, b); //যেই লাইনে function call করা হয় সেই লাইনেই function value return করে। তাই variable নিয়ে store করতে হয়। 
    printf("%d", val);
    return 0;
}

// int main()
// {
//     int val = sum(10, 5);
//     int val2 = sum(100, 50);
    
//     int val3 = sub(100, 50);

    
//     printf("%d %d ", val, val2);
    
//     printf("%d", val3);
//     return 0;
// }


