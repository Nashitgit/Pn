//// আমরা যদি nested loop এ break ব্যবহার করি , তাহলে এটি শুধু inner loop break করে outer loop না। দেখে ব্যবহার করতে হবে।

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}