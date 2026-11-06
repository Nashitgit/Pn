//Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.

#include <stdio.h>
int my_len(char* s)
{
    int cnt = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    char s[101];
    scanf("%s", s);
    int result = my_len(s);
    printf("%d", result);
    return 0;
}