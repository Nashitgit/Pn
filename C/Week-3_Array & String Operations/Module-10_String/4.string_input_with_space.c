// we can take input with space useing gets(), fgets()
//  gets(stringName)
//  fgets(stringName, sizeOfPrintingWithnullValueCount, stdin) . This is standard
// fgets limitations: it stops when get enter(next line),take and print a blank new line in second row . gets do not have this limitation

#include<stdio.h>
int main()
{
    char s[50]; //input: Hellow World
    // scanf("%s", &s);  // Hello
    // gets(s);  // Hello World
    fgets(s,12,stdin); // extra 1 added because at last it automatically put null character, so have to keep space
    printf("%s", s);
    return 0;
}