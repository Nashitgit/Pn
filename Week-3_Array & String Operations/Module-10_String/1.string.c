// string also take space( )  as a  character

#include <stdio.h>
int main()
{

    char a[4];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", a[i]);
    }
    return 0;
}