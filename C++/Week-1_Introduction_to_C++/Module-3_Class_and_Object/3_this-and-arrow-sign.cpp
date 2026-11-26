
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)  //variable এর নাম same রাখতে হলে this ব্যবহার করতে হবে
    {
        //একই  নাম হবার কারণে কম্পাইলারের বুঝতে সমস্যা হয়। এজন্য this keyword. এটি একটি built in pointer. এটি class কে point করে । 
        //this একটি pointer, object নয়

        //this.roll = roll //direct this.roll লিখতে পারব না। কারণ this object না, this  address store করছে। আমরা এটি dereference করে চেক করতে পারি
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;                //এটার shortcut হচ্ছে arrow sign



        this->roll = roll; //this এখানে rahim নামক object কে point করছে
        this->cls = cls; //  = এর পরের টা variable
        this->cls = gpa;

    }
    
};

int main()
{

    Student rahim(4, 5, 4.4);    //object declare with constructor call and value passing: value pass to constructor, constructor will automatic set the value
    Student karim(5, 3, 4.9);    



    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}