#include<stdio.h>
int main()
{
    // int x; //declare
    // x = 10; //declare and initialize
    // int x = 5; //declare and initialize

    
    int a[5] = {10, 20, 30, 40, 50};

    // int a[5] = {100, 200}; // output: 100 200 0 0 0 . if blank array will print 0

    // int a[5] = {0}; //shortcut way to print all 0. if we want to print all 0. then first will print 0 as it is, then next blank value will print 0 automatically. only works on fixed size array

    // int n;
    // scanf("%d", &n)
    // int a[n] = {0}; // noted that: will not work on variable size array.

    // int a[] = {10, 20, 30, 100}; //we also can initialize without mentioning the array size. it will be set size depends on value 

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}