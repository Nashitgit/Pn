/*
- Proving new keyword Dynamic variable accessing Heap Memory

- return করার পরেও dynamic variable মেমোরি থেকে delete হয় না
*/

#include <bits/stdc++.h>
using namespace std;
int* p;     //global pointer
void fun()
{
    //dynamic variable declare.  
    int* x = new int;  //x pointer এর মধ্যে address stored
    *x = 10;    // x কে dereference করে value store
    p = x;    //pointer p এর মধ্যেও address stored
    cout << "Fun-> " << *p << endl;    //p কে dereference করে value print

    return;
}
int main()
{
    fun();      //এখান থেকে call করার ফলে পাব ১০

    cout << "Fun-> " << *p << endl;  //এখানেও 10 পাব । 

                    //অর্থাত dynamic variable return এর পরে automatic delete হয় না । ি
    return 0;
}