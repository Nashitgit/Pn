// #include<stdio.h>
// int main()
// {
//     printf("Hello\n");
//     printf("World");
//     printf("\tWorld");
//     return 0;
// }

// variable will take space in memory for int =  4 bytes , float = 4 bytes, character = 1 byte

// #include<stdio.h>
// int main()
// {
//     int num1 ;
//     int num1 = 10;
//     int num1 = 20;

//     float f = 3.14;
//     char c = 'abcd';
//     printf("f");

//     return 0;
// }


#include<stdio.h>
int main()
{
    // int num1;
    int num1 = 10;
    num1 = 20;

    float f = 3.14;
    char c = 'a';
    printf("%d\n", num1); //%d - format specifier
    printf("%f\n", f); //%f - float print maximum 6 digits after (.)
    printf("%.2f\n", f); //%f - .2f can fix numbers after decimal point
    printf("%c\n", c); //%f - .2f can fix numbers after decimal point
    return 0;
}