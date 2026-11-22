//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I


#include<stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int cnt = rec(s, i+1);  ////return করা value store করার জন্য। যেন না হারায় এজন্য variable cnt

    if (s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U')    //return করার আগে check vowel কিনা
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
    
}

int main()
{
    char s[201];
    fgets(s,201,stdin);

    int ans = rec(s, 0);
    printf("%d",ans);


    return 0;
}