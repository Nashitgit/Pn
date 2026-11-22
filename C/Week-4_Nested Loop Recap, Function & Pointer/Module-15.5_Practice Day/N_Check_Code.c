#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    char s[a+b+5];  //for taking string input
    scanf("%s",s);
    
    bool check = true;
    for (int i = 0; i < a+b+1; i++)
    {
        if (i == a) // a এর মান i এর সমান হওয়া মানে আমরা a+1 index এ আছি। এখানে hyphen থাকার কথা
        {
            if(s[i] != '-') //
            {
                check = false;
            }
        }
        else 
        {
            if(s[i] < '0' || s[i] > '9')  //বাকি index check digit আছে কিনা
            {
                check = false;
            }
        }

    }
    if (check == true)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}