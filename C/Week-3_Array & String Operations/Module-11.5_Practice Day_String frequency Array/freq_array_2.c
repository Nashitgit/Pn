#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[6] = {0}; //we can take as much as variable
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0) //এখানে বার বার condition লিখা লাগছে
        {
            fre[0]++; 
        } 
        if (a[i] == 1)
        {
            fre[1]++;
        } 
        if (a[i] == 2)
        {
            fre[2]++;
        } 
        if (a[i] == 3)
        {
            fre[3]++;
        } 
    }
    printf("%d -> %d\n",0,fre[0]);
    printf("%d -> %d\n",1,fre[1]);
    printf("%d -> %d\n",2,fre[2]);
    printf("%d -> %d\n",3,fre[3]);
    
    return 0;
}