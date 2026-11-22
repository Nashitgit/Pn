#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int add = a + b;
    long long int mul = a * b;
    long long int sub = a - b;

    printf("%lld + %lld = %lld\n", a, b, add);
    printf("%lld * %lld = %lld\n", a, b, mul);
    printf("%lld - %lld = %lld", a, b, sub);


    return 0;
}