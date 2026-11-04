//variable declare করলে তা stack memory তে ফাকা জায়গায় যেয়ে space নেয় । সেই জায়গার address থাকে
//Pointer variable অন্য variable এর address store করে
//Pointer 32 bit PC তে 4 bit, 64 bit PC তে 8 bit জায়গা নেয়

#include<stdio.h>
int main()
{
    int x=10;
    printf("%d\n", x);
    printf("%p\n", &x); //address access করতে & , format specifier %p

    //pointer variable decalaration: যেই type এর value store হবে তার data type
    int* ptr;  //data_type * variable_name

    ptr = &x;
    printf("%p\n", ptr); //printing

    printf("%p\n", &ptr);  //printing pointers own address

    return 0;
}