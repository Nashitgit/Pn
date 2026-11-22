// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G


#include<stdio.h>
#include<limits.h>

int min =INT_MAX;
int max =INT_MIN;
void maxmin(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }
    printf("%d %d", min, max);
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
    maxmin(a,n);
    return 0;
}