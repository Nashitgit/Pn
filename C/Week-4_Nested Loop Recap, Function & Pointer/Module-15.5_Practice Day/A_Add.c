//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include<stdio.h>
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = sum(a,b);
    printf("%d", ans);
    return 0;
}