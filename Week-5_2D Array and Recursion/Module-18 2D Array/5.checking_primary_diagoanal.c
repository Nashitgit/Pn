/*
Diagonal Matis: কর্ণ বরাবর value বাকি সব 0 . Primary Diagonal Matrix, Secondary matrix

- square matrix হতে হবে
- কর্ণ বাদে বাকি সব 0
- 

*/

#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c]; // 2D array declare

    for (int i = 0; i < r; i++) // for row
    {
        for (int j = 0; j < c; j++) // for column
        {
            scanf("%d ", &a[i][j]);
        }
    }



    
    return 0;
}