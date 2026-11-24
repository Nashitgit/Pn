#include<bits/stdc++.h>
using namespace std;
int* fun()  //return type হিসেবে pointer : int* দিতে হবে
{
    // int a[5];  //static array. array এর name a এর মধ্যে array এর 0 তম index এর address store থাকে

    int* a = new int[5]; //dynamic array
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{

    int* x = fun();  // pointer হিসেবে return হয়েছে তাই pointer হিসেবেই receive করতে হবে
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}