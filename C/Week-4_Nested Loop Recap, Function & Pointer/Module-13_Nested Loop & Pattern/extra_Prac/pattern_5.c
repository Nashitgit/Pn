#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= val; j++)
        {
            printf("%c ", 'A' + j -1); // Ascii value = 65 + (1-1) = 0 => A
        }
        printf("\n");
        val++;
        
    }
    return 0;
}