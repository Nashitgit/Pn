//Reference = value থেকে address যাওয়া
//Dereference = address থেকে value যাওয়া

#include<stdio.h>
int main()
{
    int x=100;
    printf("%d\n", x);  //printing x value
    printf("%p\n", &x); //printing x's mermory address . (reference)

   
    int* ptr;   //declaring pointer
    ptr = &x;   //storing x's memory address
    printf("%p\n", ptr); //printing x's memory address

    printf("%d\n", *ptr);  //printing x value

    *ptr = 200; //changing value using pointer (dereference)
    printf("%d\n", *ptr); //
    return 0;
}