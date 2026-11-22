/*
You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

Sample Input 
5
10 20 30 40 50
1 100

Sample Output 
50 40 30 100 10 

Explanation 
After updating the value of 1st index, the array will become 10 100 30 40 50.
The reverse order will be 50 40 30 100 10.
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
    
    int idx, x;
    scanf("%d %d", &idx, &x);

    for(int i = 0; i < n; i++)
    {
       if(idx == i)
       {
        arr[i] = x;
       }
    }
    

    for(int i = n-1; i >= 0; i--)
    {
       
       printf("%d ", arr[i]);
    }
    

    return 0;
}