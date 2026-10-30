/*
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
Input
abba
Output
YES
Input
icpcassiut
Output
NO
Input
mam
Output
YES


*/


#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    int flag = 1;
    for(int i = 0, j = len-1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            printf("NO");
            flag = 0;
            break;
        }

    }
    if (flag == 1)
    {
        printf("YES");
    }

    return 0;
}