//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

//using swap function

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     for(int i = 0; i < n/2; i++) //need to swap half of the array. otherwise elements will be swapped back again
    {
        swap(a[i], a[n-1-i]);   //first element, last element . 
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}