//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
//using max function

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mx = max(mx,val);
    }

    cout << mx;

    return 0;
}