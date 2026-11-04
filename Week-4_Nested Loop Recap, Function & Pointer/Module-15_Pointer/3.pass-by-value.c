#include <stdio.h>
void fun(x)  //just x's value is received not the full variable. This is called pass by value
{
    x = 20; //value change করলেও main function থেকে পাবনা
    printf("%d\n", x); // 20 

    printf("Fun Function X address: %p\n", &x); //
}

int main()
{
    int x = 10;
    fun(x); //value passing to fun function
    printf("%d\n", x); // 10
    printf("Main Function X address: %p", &x); //
    return 0;
}