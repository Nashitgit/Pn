//https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-10/challenges/even-and-odd-8-2/problem?isFullScreen=true

#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int even_cnt = 0, odd_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            even_cnt++;
        }
        else
        {
            odd_cnt++;
        }
    }

    printf("%d %d", even_cnt, odd_cnt);

}
int main()
{
    odd_even();
    return 0;
}