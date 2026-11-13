//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L


#include <stdio.h>
long long int sum = 0;
// long long int sumArray(int a[], int n, int i)
void sumArray(int a[], int n, int i)
{
    if (i == n)
        return;
 
    sum = sum + a[i];
 
    sumArray(a, n, i + 1);
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
 
    // long long int sumResult = sumArray(a, n, 0);
    sumArray(a, n, 0);
 
    printf("%lld", sum);
 
    return 0;
}