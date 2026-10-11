//every character have a fixed ascii(American Standard Code for Information Interchange) value


#include<stdio.h>
int main()
{
    char ch = 'B';
    int num = 65;
    char ch2 = 'A';

    printf("%d",ch); // 66
    printf("%c",num); //  A
    
    printf("%c",ch2+2); //  C. ascii value of c is 67

    return 0;
}