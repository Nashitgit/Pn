#include<stdio.h>
int even(a)
{
    if (a % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "ODD";
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = even(n);
    printf(ans);
    return 0;
}