//https://codeforces.com/problemset/problem/263/A

/*
If the number 1 is at row 1 and column 5, how many moves are required to bring it to the center?

1. Find the position of 1.
2. Calculate how far it is from row 3.
3. Calculate how far it is from column 3.
4. Add both distances.
For example, if 1 is at row 5, column 1:
- Row distance = 5 - 3 = 2
- Column distance = 3 - 1 = 2
- Total moves = 2 + 2 = 4
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5];
    int row, col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j] == 1)  //finding position of 1
            {                   //storing i & j value
                row = i;    
                col = j;
            }
        }
    }

    int moves = abs(row - 2) + abs(col - 2); //calculation

    printf("%d\n", moves);

    return 0;
}