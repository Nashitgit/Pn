#include<iostream>
int main()
{

    std :: cout << "Hello World!\n";  //cout -  std namespace এ থাকে

    int x =  10;
    char c = 'A';
    double d = 34.56;

    std :: cout << x;     //c++ এ format specifier নাই, direct variable লিখলেই হয়

    std :: cout << x << std::endl << c << " "<< d << std :: endl; //endl for new line

    return 0;
}