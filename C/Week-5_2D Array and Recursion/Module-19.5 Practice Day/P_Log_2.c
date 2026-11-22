//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include<stdio.h>
int log2(long long int n)
{
    if (n == 1) return 0;

    return 1 + log2(n/2);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = log2(n);
    printf("%lld", ans);
    return 0;
}