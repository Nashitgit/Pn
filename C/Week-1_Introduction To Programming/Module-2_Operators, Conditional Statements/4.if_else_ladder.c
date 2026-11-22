#include<stdio.h>
int main()
{
    int tk;

    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger \n");
    }
    else if (tk >= 50)
    {
        printf("Fuchka");
    }
    else if (tk >= 20)
    {
        printf("Chips");
    }
    
    else
    {
        printf("Not \n");
    }
    


    return 0;
}