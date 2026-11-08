#include<stdio.h>

void hello(int i) //base case  //Recursion function
{
    if (i == 6) //controlling recursion by condition
    {
        return;  
    }
    printf("%d\n",i);
    hello(i+1); //Recursive call  //increasing i's value
}
int main()
{
    int i=1;
    hello(i);

    return 0;
}