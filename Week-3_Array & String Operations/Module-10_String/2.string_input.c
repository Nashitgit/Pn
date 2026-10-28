// we can take a whole array in a single string. we can take input in a line and output in a line

// String maintains null character. 
//how print statement will understand wher stirng is finishing. after getting space it sees \0 null

// after taking string input when it finds space it put a null character so that print can understand when to stop printing 

#include<stdio.h>
int main()
{
    char s[10];
    scanf("%s", &s);

    printf("%s\n", s);
    printf("%c\n", s[3]);
    printf("%d", s[5]);  //for Hello input in index 5 there have null value and the rest of the index have garbage value we can see in online compiler

    return 0;
}