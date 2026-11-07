//কোনো function যখন নিজেই নিজেকে call করে কোনো কাজ করিয়ে নেয় তাকে recursion বলে। সেই function কে recursive function বলে। পুরো process কে recursion বলে


#include<stdio.h>

void hello()  //Recursion function
{
    printf("Hello\n");
    hello();  //here infinite, cause not controlled yet
}
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}