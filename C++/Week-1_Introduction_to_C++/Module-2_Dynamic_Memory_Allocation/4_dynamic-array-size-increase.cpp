//static array delete করা যায় না, ফলে memory wastage হয়
// dynamic array/variable delete করা যায়

#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int b[5]; //ধরি আমাদের আরো input বেশি নিতে হবে। এজন্য প্রথমে b তে a এর value রাখতে হবে
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 40;
    b[5] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}