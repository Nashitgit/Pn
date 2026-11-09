#include<stdio.h>
void print_array(int a[], int n, int i) //array, array size, array index( বর্তমানে কোন index এ আছি বোঝার জন্য i )
{
    if (i == n)
    {
        return;
    }
    printf("%d ",a[i]);

    print_array(a,n,i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    print_array(a,n, 0); // array এর প্রথম index 0, তাই 0 কে pass করছি
    return 0;
}