#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    if (a != 0 && b != 0 && (a % b == 0 || b % a == 0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}