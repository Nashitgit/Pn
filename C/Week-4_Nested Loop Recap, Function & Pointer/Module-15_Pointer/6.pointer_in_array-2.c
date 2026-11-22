#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}; // array এর name একটি pointer . এর মধ্যে 0 তম index এর address store থাকে
    *a = 100; //changing array value by dereferencing
    *(a+1) = 200; 
    *(a+3) = 400; 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);  //100, 200, 30, 400, 50
    }

    return 0;
}