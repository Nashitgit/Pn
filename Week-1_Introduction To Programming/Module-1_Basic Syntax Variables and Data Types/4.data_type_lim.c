// 1 byte = 4 bits
// 1 bit এ ২টি সংখ্যা থাকতে পারে। 0 অথবা 1
// কত bit এ কত digit থাকতে পারে হিসাব = 2^n . (n হচ্ছে bit) . 
// if 2 bit = 2^2 = 4digit => 0 1 , 1 0 , 0 0 , 1 1 
// 1 টি integer variable সর্বোচ্চ 10^9 digit রাখা যায়। কারণ integer can take highest 4bytes , 4 bytes = 4 * 8(bit) => 16bits  => 2^32(digit highest) => 10^9digits = 1000000000
//long long integer can store 8 bytes = 10^18 digit
//float can take total 8-9 digit , before and after decimal point together. 
// long float can take long value before decimal point. but after decimal point maximum is 6

#include<stdio.h>

int main()
{
    int b = 10000000000; //will show garbage random garbage value because it exceeds 10^9 . Solution is long long integer

    int a = 1000000000;

    double f = 21348937298749.4837873987;

    printf("%d", a);

    printf("%lld\n", b);
    
    printf("%lf", f);


    return 0;
}
