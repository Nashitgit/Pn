//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K


#include<stdio.h>
#include<limits.h>
int max = INT_MIN;
int maximum(int a[], int n, int i)
{
    if (i == n) return;

    if(a[i] > max)
    {
        max = a[i];
    }

    maximum(a,n, i+1);

    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans = maximum(a,n,0);

    printf("%d", ans);

    return 0;
}