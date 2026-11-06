//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-10/challenges/is-palindrome-15/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
int is_palindrome(char* s)
{
    int flag = 1;
    int len = strlen(s);
    for (int i = 0, j = len-1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int ans = is_palindrome(s);

    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}