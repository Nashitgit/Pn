// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

// Logic:
// 456 % 10 = 6
// 456 /10 = 45
// output: 456 = 6 5 4


//corner case 0 হলে আবার কোনো কিছু print হবে না


#include <stdio.h>
void rec(int n)
{
    if (n == 0)
        return; // last digit কে ভাগ করলে 0

    rec(n / 10);
    int last_digit = n % 10;
    printf("%d ", last_digit); // printing after recursion call for reverse printing
}

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)   //loop for multiple test case
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");   //for corner case: 0
        }
        rec(n);
        printf("\n"); //প্রতিটি test case শেষে একটি করে new line লাগবে
    }
    return 0;
}