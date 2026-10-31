#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s);
        int capcnt = 0, smlcnt = 0, digit = 0;
        int len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capcnt++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                smlcnt++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capcnt, smlcnt, digit);
    }

    return 0;
}