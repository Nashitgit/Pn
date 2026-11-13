//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L


#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);


    return 0;
}