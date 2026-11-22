//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <stdio.h>
void print(int n)
{

    int i;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);

        if (i != n) // so that loop prints the last number without a space.
        {
            printf(" "); 
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    print(n);

    return 0;
}