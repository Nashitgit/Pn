// user input নিয়ে করলে constructor ছাড়াই করা যায়। কারণ shortcut হয় না


#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g)  //declaring constructor
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
    
};

int main()
{
    // int r;
    // int c;
    // double g;

    // Student rahim(r, c, g);    // এভাবে shortcut হলো না . এটা constructor ছাড়াই করা যায়
    // Student karim(r, c, g);    


    Student rahim;

    cin >> rahim.roll >> rahim.cls >> rahim.gpa;



    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}