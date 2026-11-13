#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt = 0;
    bool operation = true;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2; // 2 দিয়ে ভাগ করে একই index এ রেখে দেয়া
            }
            else
            {
                operation = false;
                break; // inner loop break
            }
        }
        if (operation == true)
        {
            cnt++;
        }
        else
        {
            break; // outer loop break
        }
    }
    printf("%d", cnt);

    return 0;
}