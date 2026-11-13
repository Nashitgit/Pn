//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J



#include<stdio.h>
long long int fact (int n)
{
    if (n == 1)    //n এর মান 1 হলে আমরা ফেরত আসা শুরু করব । নাহলে unlimited হয়ে যাবে
    {
        return 1; //
    }

    long long int mul = fact(n-1); //n এর মান 1 করে কমবে: 5 4 3 2 1 
    return n * mul;             //নিজের value অর্থাত n এর সাথে গুন করে দিব যেই value return আসছে অর্থাত mul (n*mul) . এরপর পুরো গুনফলটাই return
}
int main()
{
    int n;
    scanf("%d", &n);

    long long int ans = fact(n);

    printf("%lld", ans);


    return 0;


}