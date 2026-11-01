
/*
            *
           ***
          *****
         *******
*/

#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n); 
    int star = 1;
    int space = n-1;
    for (int i = 0; i < n; i++)  //for printing line
    {
        for (int k = 1; k <= space; k++) //for printing space
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        star += 2;  //every line star increasing difference 2
        space--;
    } 
    
    return 0;
}