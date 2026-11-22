#include<stdio.h>
#include<string.h>
int main()
{
    int a[101], b[101];
    scanf("%s %s", a, b );
    int length = strlen(b);
    for (int i = 0; i <= length; i++) // শেষ পর্যন্ত loop চালাচ্ছি কারণ null character সহ নিব যেন b copy হবার পরে terminate হয়, নইলে প্রথম stgring বড় হলে বাকি character output এ আসবে
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}