/*Function 
    - Built-in function strlen(), strcmp(), strcpy()
    - User Defined Function

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int ans = ceil(4.3); //4
    int ans = floor(4.3); //5
    int ans = round(3.4); //3
    int ans = round(3.5); //4
    int ans = sqrt(16); //4
    float ans = sqrt(20); //4.472136
    int ans = pow(3,2); //9
    int ans = abs(-10); //10

    printf("%d", ans);
    printf("%lf", ans);

    return 0;
}