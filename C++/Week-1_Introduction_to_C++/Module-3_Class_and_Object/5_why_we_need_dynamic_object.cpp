
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

 Student* fun() // return type Student*. কারণ এখানে Student data type এর pointer return করছি
    {
        Student karim(5, 3, 4.99);
        //সরাসরি return না করে pointer এ রেখে return করব এখন
        Student* p = &karim;

        return p;    //এই process এ return করার জন্য static object দিয়ে হবে না, Dynamic object ব্যবহার করতে হবে
    }

int main()
{


    Student* p = fun();  //  receive typeও Student*


    cout << p->roll << " " << p->cls << " " << p->gpa << endl; //এখানে garbage value পাব কারণ এখানে memory address return করছে। আর return করার পর memory clear হয়ে গেছে। ফলে ওই address আর পাওয়া যাচ্ছে না।

    return 0;
}