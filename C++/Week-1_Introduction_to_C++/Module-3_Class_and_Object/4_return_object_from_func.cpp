
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

 Student fun() // return type Student. কারণ এখানে যে karim return করছি সেটা Student data type এর
    {
        Student karim(5, 3, 4.99);
        return karim;   //এটি একটি static object. Object array হিসেবে কাজ করছে না, normally variable হিসেবে কাজ করছে। 
    }

int main()
{

    // Student rahim(4, 5, 4.4);

    Student obj = fun();  //  receive typeও Student

    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}