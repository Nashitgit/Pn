#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}; //array এর name একটি pointer . এর মধ্যে 0 তম index এর address store থাকে

    printf("Array 0th index address: %p\n", &a[0]);  

    // printf("%p\n", &a[1]); //প্রতিটি elements এর address 4 ঘর পরে পরে হয়, যেহেতু 4bit জায়গা দখল করে 1টি int value
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);

     printf("Array name: %p\n", a); //output same as 0th index. অর্থাত প্রমানিত যে, array name আসলে pointer হিসেবে কাজ করে এবং 0তম index এর address store রাখে।

    printf("%d", *a); //10  (dereference)

    return 0;
}