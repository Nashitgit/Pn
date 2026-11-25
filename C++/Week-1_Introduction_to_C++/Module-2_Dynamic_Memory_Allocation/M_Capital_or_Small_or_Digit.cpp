//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 48 && c <= 57 )
    {
        cout << "IS DIGIT" <<  endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if ( c >= 97 && c <= 122)
        {
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "IS CAPITAL" << endl;
        }
    }
    return 0;
}