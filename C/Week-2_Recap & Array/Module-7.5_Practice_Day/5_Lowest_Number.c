#include <stdio.h>
#include <limits.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int min = INT_MAX;
    int idx;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            idx = i;
        }
    }
    printf("%d %d", min, idx+1);

    return 0;
}