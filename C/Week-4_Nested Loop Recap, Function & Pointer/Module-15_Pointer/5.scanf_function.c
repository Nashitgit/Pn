#include<stdio.h>

void scanf(int *x)
{
    //code how to take input
}

int main()
{
    int x;
    scanf("%d", &x); // we use & sign here: কারণ scanf functin এ input দিলে তা  main function থেকে পেতে হবে । অর্থাত input যেন main function থেকে পাওয়া যায়। printf এ লাগেনা কারণ সেখানে value change করিনা শুধু print করি
    printf("%d", x); 
    return 0;
}