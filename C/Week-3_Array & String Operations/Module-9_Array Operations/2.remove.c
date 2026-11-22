// removing an element from an array
/**
 * input: 
 * 5 
 * 10 20 30 40 50 
 * 1 
 *
 *OUtput:
 10 30 40 50

 */

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

     int idx;
     scanf("%d", &idx);
     for (int i = idx; i < n-1; i++)
     {
        a[i] = a[i+1];
     }

    //  n--;
    //  for (int i = 0; i < n; i++)

     for (int i = 0; i < n-1; i++)
     {
        printf("%d ",a[i]);
     }
     return 0;
 }