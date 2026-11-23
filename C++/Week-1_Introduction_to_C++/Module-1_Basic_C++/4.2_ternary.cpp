// (condition) ? True: False 

//if - else এর মাঝে একটাই কাজ হলে ব্যবহার করা, Not in nested loop

#include<iostream>
using namespace std;
int main()
{
    int x = 5;

    x % 2 == 0 ? cout << "Even\n" : cout << "Odd";

    return 0;
}