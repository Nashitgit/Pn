/*
Problem Statement

You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

Sample Input 

6
5 -3 9 -10 2 8 

Sample Output 
24 -13
*/


#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum1=0, sum2=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            sum1 = sum1 + arr[i];
        }
        else
        {
            sum2 = sum2 + arr[i];
        }
    }
    printf("%d %d", sum1, sum2 );

    return 0;
}