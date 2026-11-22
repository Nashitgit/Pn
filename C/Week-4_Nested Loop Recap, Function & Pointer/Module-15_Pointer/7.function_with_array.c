#include<stdio.h>
void fun (int a[])
{
    a[1] = 200; //Array is passed by reference automatically. changed value can be showed from main function also. because for Array passing it is passed by reference. But for variable passing it is pass by value.
}
int main()
{
    int a[5] = {10, 20, 30, 40, 50}; 
    fun(a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}