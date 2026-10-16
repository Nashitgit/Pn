#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }

   
    for (int i = 0; i < n; i++)
    {
       if (a[i] <=10 )
       {
        printf("A[%d] = %lld\n", i, a[i]);
       }
       
    }


    return 0;
}