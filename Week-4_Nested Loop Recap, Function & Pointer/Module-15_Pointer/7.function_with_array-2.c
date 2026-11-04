
//function থেকে full array return করা যায় না, শুধু 0th index যায়। Need dynamic array for array passing

//array passing in function
#include<stdio.h>
void fun (int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]); 
    }
    fun(a, n); //আমরা যখন func থেকে array pass করি তখন array এর সাথে sizeও pass করতে হয়। যেন ওই func থেকে access করা যায়

    return 0;
}