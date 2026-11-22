// EOF = End Of File.
// here we will take input until we get our expected result

#include <stdio.h>
int main()
{
    
    int pass;

    while (scanf("%d", &pass))   
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
