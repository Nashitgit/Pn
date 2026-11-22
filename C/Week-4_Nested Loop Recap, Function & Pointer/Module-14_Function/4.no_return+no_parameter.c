#include <stdio.h>
void sum()
{
    
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("%d", ans);  // return না থাকলেও কাজ শেষে function automatic শেষ হয়ে main function এ যায় এবং stack memory থেকে মুছে যায়
}

int main()
{
    sum(); //function call না করলে function এর কাছে যাবে না এবং কোনো কিছু print করবে না।
    return 0;
}