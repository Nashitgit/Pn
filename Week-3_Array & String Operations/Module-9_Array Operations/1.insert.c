/*have to insert an array.  will take a index and value that will place in that array and others element will shift right.
 sample input:
 5
 10 20 30 40 50
 1 100

 Output: 10 100 20 30 40 50
 */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1]; // have to increase array size. because need space for new input element
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int idx, val;
    scanf("%d %d", &idx, &val);
    for (int i = n; i >= idx + 1; i--) //reversely running loop right before the given index 
    {
        a[i] = a[i - 1]; //value is shifting to right
    }

    a[idx] = val; // setting input value to given input index

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}