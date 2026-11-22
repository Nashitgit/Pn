// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M

#include <stdio.h>
#include <stdbool.h>

int count = 0;
void count_distinct(int a[], int n) //(array, array size) parameter receive
{
    for (int i = 0; i < n; i++)
    {
        int is_unique = true;
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                is_unique = false;
            }
        }
        if (is_unique == true)
        {

            count++;
        }
    }
    printf("%d", count);
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
    count_distinct(a, n); // function এ array, array size sending


    return 0;
}