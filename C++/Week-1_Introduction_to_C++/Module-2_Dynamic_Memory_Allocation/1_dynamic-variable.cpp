/*

- Dynamic memory তে size বাড়ানো যায়
- stack memory এর মত compile শেষে -  Automatica delete হয়ে যায় না

- here x variable stack memory access করছে
- new keyword heap memory access করতে পারে
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;  // static variable . Stack memory তে  4 byte জায়গা দখল করে variable 10 store করে।
    
    //pointer এর মধ্যে ‍address store থাকে
    int *p = new int;  //dynamic variable.  new keyword মানে heap memory এর মধ্যে access করে data type অনুযায়ী জায়গা নেয়
    *p = 19;            //address এ যেয়ে dereference
    cout << *p << endl;

    return 0;
}