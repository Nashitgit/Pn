
#include<stdio.h>
void fun (char a[],int n)
{
    printf("%s\n", a);
    printf("%d\n", strlen(a));

}
int main()
{
    char s[10];
    scanf("%s", &s);
    fun(s, 10); 

    return 0;
}