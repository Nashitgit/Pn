#include <stdio.h>
void fun(int* p)  // x's reference is received in pointer
{
    *p = 20;

}

int main()
{
    int x = 10;
    fun(&x); // passing to fun function as reference
    printf("%d\n", x); // 20
    return 0;
}