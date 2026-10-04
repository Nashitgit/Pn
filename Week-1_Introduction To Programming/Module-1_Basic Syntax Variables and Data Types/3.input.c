
#include<stdio.h>

int main()
{
    int a;
    int b;
    float f;
    char c;


    scanf("%d", &a); //take input and store in variable a. &a will replace the previous garbage value. to update value &(reference) is used
    scanf("%f", &f);
    // scanf("%c", c);

    // we can take multiple scan together
    // scanf("%d %f", &a,&f);

    printf("%d", b); //if we don't take anything as input. it will show random garbage value

    printf("%d", a); //don't need to use & here. because here direct value is printed, don't need to change like input

    // we can also print multiple value together
    printf("%d %f ",a,f);
    return 0;
}