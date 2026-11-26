/**
 * Constructor Properties:
 * - Constructor একটি special function
 * - Constructor এর কোনো রকই return type থাকে না
 * - Constructor এর নাম হয় হুবহু class এর নাম
 * 
 * constructor class এর ভিতরে বসে
 * constructor automatic call হয় Object declare করার সময়
 * object declare করার সময় constructor কেও call করতে হবে
 * 
 * user থেকে input নিয়ে করার সময় constructor ততটা usable হয় না
 */



#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)  //declaring constructor
    {
        roll = r;
        cls = c;
        gpa = g;
    }
    
};

int main()
{
    // Student rahim;      //constructor ব্যবহার করলে এভাবে বার বার set করা লাগবে না
    // rahim.roll = 45;
    // rahim.cls = 5;
    // rahim.gpa = 4.3;

    // Student rahim;
    // rahim.roll = 45;
    // rahim.cls = 5;
    // rahim.gpa = 4.3;


    // Student rahim();    //object declare with constructor call

    Student rahim(4, 5, 4.4);    //object declare with constructor call and value passing: value pass to constructor, constructor will automatic set the value
    Student karim(5, 3, 4.9);    




    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}