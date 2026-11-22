//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-10/challenges/count-me-3/problem?isFullScreen=true

/*
Problem Statement

You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format

First line will contain T, the number of test cases.
Each test case will contain only S.
Constraints

1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also
Sample Output 0

3 10 2
7 16 4
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s);
        int capcnt = 0, smlcnt = 0, digit = 0;
        int len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capcnt++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                smlcnt++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capcnt, smlcnt, digit);
    }

    return 0;
}