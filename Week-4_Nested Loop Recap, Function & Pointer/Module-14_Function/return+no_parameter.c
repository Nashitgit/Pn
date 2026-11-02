#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d", &a, &b); //parameter না থাকলে function এর ভিতরেই input নিতে হবে।
    int ans = a + b;
    return ans;
}


int main()
{
    int ans = sum();
    printf("%d", ans);
    return 0;
}