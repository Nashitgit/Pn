//আগে recursion call করে করে শেষ পর্যন্ত যেয়ে, তারপর শেষ function থেকে print করা শুরু

#include<stdio.h>

void hello(int i)  
{
    if (i == 6) 
    {
        return;  
    }
    // printf("%d\n",i);

    hello(i+1);       //calling before printing
    printf("%d\n",i); //after shifting the line it is reversed
}
int main()
{
    hello(1);

    return 0;
}