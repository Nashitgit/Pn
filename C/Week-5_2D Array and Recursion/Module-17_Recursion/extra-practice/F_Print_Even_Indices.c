//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <stdio.h>
void even(int a[], int n, int i)
{
    if (i < 0 )
    {
        return;
    }
    if (i % 2 == 0)
    {
        printf("%d ", a[i]);
    }
    even(a, n, i - 1);
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
    even(a, n, n-1); //passing passing n-1 because index will be  reverse( n-1 to 0)
    return 0;
}