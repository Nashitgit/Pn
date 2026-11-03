#include<stdio.h>
int main()
{
    int a, b, c;
    char s, q;
    int ans;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    if ( s == '+' )
    {
        ans = a+b;
    }
    else if ( s == '-' )
    {
        ans = a-b;
    }
    else if ( s == '*' )
    {
        ans = a*b;
    }

    if (ans == c)
    {
        printf("Yes");
    }
    else
    {
        printf("%d", ans);
    }
    return 0;
}