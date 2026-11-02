#include <stdio.h>
void sum(int a, int b) // কোনো কিছু return না করলে return_type এর জায়গায় void লিখতে হবে
{
    int ans = a + b;

    // return;  //শুধু return লিখতে পারব। কারণ এটা value return না। return করা মানে function এখানেই শেষ হয়ে main function এ function call এর কাছে চলে যায়। 

    printf("%d", ans); // যেহেতু value return হচ্ছে না, তাই এখানেই print করতে হবে।
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}