
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch(x%2)
    {
        case 0:               // x কে 2 দিয়ে ভাগ করার পর হয় 0 অথবা 1 হবে তাই
            cout << "Even\n";
            break;

        case 1:     
            cout <<"Odd\n";
            break;


    }
   
    return 0;
}