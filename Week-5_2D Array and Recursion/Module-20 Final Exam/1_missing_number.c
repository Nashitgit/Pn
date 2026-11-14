// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-cc-10/challenges/find-the-missing-number-11-3/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    while (x--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int mul = a * b * c;

        if (m % mul == 0)
        {
            
            printf("%lld\n", m / mul);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
