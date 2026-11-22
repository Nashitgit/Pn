#include<stdio.h>
void print_n_to_1(int i, int n)
{
    if (i == 0) return;
    if (i != n)
    {
        printf(" ");
    }
    printf("%d",i);

    print_n_to_1(i-1, n);

}
int main()
{
    int n;
    scanf("%d", &n);
    print_n_to_1(n,n);
    return 0;
}