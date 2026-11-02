#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d", &a, &b); //parameter না থাকলে function এর ভিতরেই input নিতে হবে। যেহেতু আমরা main function থেকে parameter pass করতে পারছি না।
    int ans = a + b;
    return ans;
}


int main()
{
    int ans = sum();
    printf("%d", ans);
    return 0;
}