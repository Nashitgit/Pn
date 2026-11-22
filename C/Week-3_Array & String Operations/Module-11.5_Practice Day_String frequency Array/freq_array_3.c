#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[6] = {0}; // we can take as much as variable. here taking 6 because input will be (0-5) . if input would 0,1,0,1,2 , then we would take 3 size array.
    for (int i = 0; i < n; i++)  // এই loop চলছে input array এর size এর উপর
    {
        // int val = a[i]; //a[i] এর মান যত
        // fre[val]++; //আমরা তত তম index এ যেয়ে ১ মান বাড়াচ্ছি

        fre[a[i]]++; //
    }
    for (int i = 0; i < 6; i++) // এই loop চলছে fre array এর size এর উপর
    {

        printf("%d -> %d\n", i, fre[i]);
    }
    
    return 0; 
}