/*
        1
      1 2
    1 2 3 
  1 2 3 4
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n-1;
    for (int i = 1; i <=n; i++) //for printing lines
    {
        for (int j = 1; j <= space; j++) //for printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= val; k++) //for printing number
        {
            printf("%d", k);
        }
        printf("\n");
        val++; // value is increasing every line
        space--; // space is decreasing every line
    }
    return 0;
}