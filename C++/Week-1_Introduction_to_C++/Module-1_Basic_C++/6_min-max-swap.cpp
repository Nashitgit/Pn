#include<iostream>
#include <algorithm>    //for min-max function header file
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    // if (a < b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }

    cout << min(a,b) <<endl;
    cout << max(a,b) <<endl;

    cout << min({3,5,2, 6,5,7,5,9}) <<endl; //can extract from multiple numbers. here need to use second bracket{}


    //_______SWAP function__________
    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}