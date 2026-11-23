//variable এর মান fixed হলে আমরা switch case ব্যবহার করি। যেমন: মান এত হলে এটা করব এরকম

#include<iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch(day)
    {
        case 1:     //if (day == 1)
            cout << "Saturday\n";
            break;

        case 2:     //else if (day == 2)
            cout <<"Sunday\n";
            break;

        case 3:
            cout <<"Monday\n";  // কোনো একটা case true হলে পরের সবগুলো case true করে দেয়, ফলে নিচের সবগুলোই print হয়। এরকম কাজের জন্য switch বানানো হয়েছিল
            break;      //break লিখলে এখানেই থেমে যাবে

        case 4:
            cout <<"Tuesday\n";
            break;

        case 5:
            cout <<"Wednesday\n";
            break;

        case 6:
            cout <<"Thursday\n";
            break;

        case 7:
            cout <<"Friday\n";
            break;

        default:    //কোনো condition fullfill না হলে। if-else এর else এর মত
            cout <<"Wrong Input";

    }
   
    return 0;
}