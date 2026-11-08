//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<stdio.h>
void print_to_one(int i, int n)
{
    if (i == 0) return; 

     if (i != n)
        printf(" ");

    printf("%d", i);
    print_to_one(i -1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_to_one(n, n);
    return 0;
}