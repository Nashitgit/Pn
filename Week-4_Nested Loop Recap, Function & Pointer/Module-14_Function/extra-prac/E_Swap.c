//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

#include<stdio.h>
int swap()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d %d", a, b);
    
}
int main()
{
    swap();
    return 0;
}