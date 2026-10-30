/*
Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
Input
5
1 3 2 3 1
Output
YES

Input
4
1 2 3 4
Output
NO


*/
// Array == Reverse Array? => Palindrome
// Two pointers technique using

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag = 1; // using flag for tracking NO once print or not
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j]) // প্রথম ২টি না মিললেই তো পরের গুলো মিলুক আর না মিলুক Palindrome না
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