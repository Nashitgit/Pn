// i = i + 1 . short form i += 1. ex: i*=3, i /= 4

// ++i = pre increment . firstly increment then inside loop

// i++ = post increment. firstly inside loop then increment

// #include<stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 5; ++i)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     int y = x++;  //firstly 10 will store to y(y=10), then x's value will increase to 11
//     printf("%d %d", x, y); //11  10
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     int y = ++x;  //firstly x's value will increase to 11, then it will store to y(y=11)
//     printf("%d %d", x, y); //11  11
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     int y = x++;
//     int z = ++y;
//     printf("%d", z++); // 11
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     ++x;
//     printf("%d", ++x); // 12
//     return 0;
// }

#include <stdio.h>
int main()
{
    int x = 10;
    --x;
    printf("%d\n", x--); // 9
    printf("%d", x); // 8
    return 0;
}
