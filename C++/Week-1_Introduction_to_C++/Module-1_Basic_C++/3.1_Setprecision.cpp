#include<iostream>
#include<iomanip> //setprecision function ব্যবহার করার জন্য header file
using namespace std;
int main()
{

    double d = 23.34567;
    cout << d <<endl;  //দশমিকের পরে সর্বোচ্চ ৪টির বেশি সংখ্যা print করে না
    cout << fixed << setprecision(5) << d <<endl;  // দমমিকের পরে কত digit হবে ঠিক করে দিতে পারব

    return 0;
}