#include <stdio.h>

int z = 99;  //Global Variable . যেকোনো function থেকে access করা যাবে।

void sum()
{
    int y = 20; // এই function এর বাইরে y access করতে পারব না
    printf("Sum -> %d %d\n", y, z);
}

int main()
{
    int x = 10;     //main function এর বাইরে x access করতে পারব না
    printf("Main -> %d %d\n", x, z);
    sum();
    return 0;
}