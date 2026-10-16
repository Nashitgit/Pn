#include<stdio.h>
int main()
{
    
    int arr[10]; //declaring 10 variable at once using array

    arr[2] = 100; //assingning value to a variable in 3rd index of array
    arr[3] = 20;
    arr[1] = 50;
    printf("%d\n", arr[2]);
    printf("%d %d", arr[1], arr[3]);


    return 0;
}