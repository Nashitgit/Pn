#include <stdio.h>

void hello(int i)
{
    if (i == 101)
    {
        return;
    }
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }

    hello(i + 1);
}
int main()
{
    hello(1);

    return 0;
}