//to convert capital letter to small letter have to add 32
//to convert small letter to capital letter have to subtract 32

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    return 0;
}