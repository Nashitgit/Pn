#include<iostream>
using namespace std; //এটা লিখে দিলে বার বার std লিখতে হবে না

int main()
{
    int x;
    char c;
    double d;

    // std :: cin >> x;
    // std :: cout << x << std :: endl;

    cin >> x >> c >> d;
    cout << x << " " << c << endl << d << endl;

    int asc = c;  // to print ascii value: need to store in another variable
    cout << asc << endl;

    cout << (int) c << endl; //typecasting করেও ascii value print করা যায়

    int y = 65;
    cout << (char) y << endl;

    
    return 0;

}