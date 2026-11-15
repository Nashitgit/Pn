// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-cc-10/challenges/difference-array/problem?isFullScreen=true




#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n], b[n], c[n];

        // Input array and copy into B
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        // Selection Sort on B
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;

            for (int j = i + 1; j < n; j++)
            {
                if (b[j] < b[min])
                {
                    min = j;
                }
            }

            // Swap
            int temp = b[i];
            b[i] = b[min];
            b[min] = temp;
        }

        // Calculate absolute difference
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];

            if (c[i] < 0)
            {
                c[i] = -c[i];
            }
        }

        // Print C
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}