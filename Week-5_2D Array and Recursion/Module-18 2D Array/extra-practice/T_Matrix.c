//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

// আমরা যদি nested loop এ break ব্যবহার করি , তাহলে এটি শুধু inner loop break করে outer loop না। দেখে ব্যবহার করতে হবে।
#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int pri = 0, sec = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i == j)  //primary diagonal
           {
            pri += a[i][j];
           }
           if (i + j == n-1) //secondary diagonal
           {
            sec += a[i][j];
           }
        }
    }
    printf("%d", abs(pri-sec));

    return 0;
}