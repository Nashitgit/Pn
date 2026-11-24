/*
- Proving static variable delete after return
*/

#include <bits/stdc++.h>
using namespace std;
int* p;     //global pointer
void fun()
{
    int x = 10; // function return করার পরে value delte হচ্ছে কিনা দেখার জন্য এই variable এর address একটি pointer এ store করে রাখতে পারি। পরে main function থেকে pointer এর মাধ্যমে value print করে দেখব পাচ্ছি কিনা
    p = &x;     //storing address of x
    cout << "Fun-> " << *p << endl;     //dereferencing: for printing value from address

    return;
}
int main()
{
    fun();      //এখান থেকে call করার ফলে পাব

    cout << "Fun-> " << *p << endl;  //এখানে 10 পাবনা
    return 0;
}