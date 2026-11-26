#include<bits/stdc++.h>
using namespace std;
class Student   //class declare 
{
    public:     // public access modifier এর সকল variable সব জায়গা থেকেই access করা যায়
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // int a;  //data_type variable_name

    // data_type object_name . class এর সবগুলো element object a এর ভিতরে
    Student a;  //a নামের object তৈরী হয়েছে, student class এর সব element নিয়ে

    a.roll = 10; //accessing class element and setting value
    a.gpa = 4.5;
    
    // a.name = "Sakib"; //এভাবে রাখতে পারবনা। array পরে set করা যায় না

    //  temporary variable এ রেখে সেটা copy করে set করা যায়
    char temp[100] = "Sakib";
    strcpy(a.name,temp);

    

    cout << a.name << " " << a.roll << " " << a.gpa << endl;



    return 0;
}