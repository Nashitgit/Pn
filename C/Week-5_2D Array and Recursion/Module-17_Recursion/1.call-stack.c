/*
- Function এর কাজ শেষ হলে তা automatic return হয়, যেই function থেকে call করা হয়েছিল সেই function এ

- function call করা হলে direct call করা function এ চলে যেয়ে সেই function এর কাজ শেষ করে । তারপর যেই function থেকে call করা হয়েছিল সেই function এর কাজ করে
*/

#include<stdio.h>
void mello()
{
    printf("Mello\n");
}
void gello()
{
    printf("Gello\n");
    mello();
}
void hello()
{
    printf("Hello\n");
    gello();
}
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}