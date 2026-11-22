/*
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
Input
2
ipAsu ccsit
ey gpt

Output
icpcAssiut
egypt


*/

//https://codeforces.com/group/MWSDmqGsZm/contest/219856/my

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[55], t[55];
        scanf("%s %s", s, t);
        int len_s = strlen(s);
        int len_t = strlen(t);

        int i;
        for ( i = 0; i < len_s && i < len_t; i++)
        {
            printf("%c%c", s[i], t[i]);
        }
        if(i<len_s) //অপর string যদি শেষ হয়ে যায়, বাকি অংশটুকু print করার জন্য loop
        {
            for ( ; i<len_s;i++)
            {
                printf("%c",s[i]);
            }
        }
        if(i<len_t) //অপর string যদি শেষ হয়ে যায়, বাকি অংশটুকু print করার জন্য loop
        {
            for ( ; i<len_t;i++)
            {
                printf("%c",t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}