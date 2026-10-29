/*
Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 10^6) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
InputCopy
351
OutputCopy
9
*/

//integer 10^9 means = 1000000000, length 10^6 means more larger.



#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s",s);
    int length = strlen(s);
    int sum = 0;
    for (int i = 0; i < length; i++)
    {

        // sum += s[i] - '0'; //subtract character 0 can be done also. here ASCII values will subtract.

        sum += s[i] - 48;  //have to substract 48. because character holds ASCII value. suppose input '351' . 3 ASCII value 51. 51-48 = 3, 5 ASCII value = 53. 53-48 = 5.....
    }
    printf("%d", sum);

    return 0;
}