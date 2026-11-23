#include<iostream>
using namespace std;
int main()
{
    int x;

    cin >> x;

    cin.ignore(); //new line ignore করে input নেয়ার জন্য

    char s[100];

    // cin >> s;   //scanf এর মত এখানেও space সহ input নিতে পারে না

    cin.getline(s,100); // space সহ input নেয়ার জন্য। কিন্তু এখানে নতুন লাইন থাকলে নিতে পারে না

    cout << x << endl << s << endl;

    return 0;
}