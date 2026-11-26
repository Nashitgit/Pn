#include<bits/stdc++.h>
using namespace std;
class Student   
{
    public:    
    char name[100]; //100 byte
    int roll;       //4 byte
    double gpa;     //8 byte
};

int main()
{

    Student a, b;  
    
    //input এ নামের মধ্যে space থাকলে বাকি input আলাদা লাইনে লিখতে হয়
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa;

    cin.ignore();   //কারণ b object এর input এর জন্য দেয়া enter-space ধরে garbage value print করে
    //getchar() দিয়েও করা যেত
    
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;



    return 0;
}