#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int capcnt = 0, smlcnt = 0, digit = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capcnt++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                smlcnt++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capcnt, smlcnt, digit);
    }

    return 0;
}