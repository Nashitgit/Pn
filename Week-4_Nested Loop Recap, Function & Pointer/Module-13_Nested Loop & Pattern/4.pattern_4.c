/*
        *
       **
      ***
     ****
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;
    for (int i = 1; i <=n; i++) //for printing lines
    {
        for (int j = 1; j <= space; j++) //for printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        star++; // star is increasing every line
        space--; //space is decreasing every line
    }
    return 0;
}