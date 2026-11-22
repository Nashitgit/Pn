// difference than other two loops is: do while will run at least once whether condition is true or not
#include <stdio.h>
int main()
{

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}