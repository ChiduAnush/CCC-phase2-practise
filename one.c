#include <stdio.h>
int main()
{

    // int x = 5;
    // int a = ++x + ++x;

    // YAY!!
    // as include path wasnt working, reinstalled xcode developer tools, homebrew, and node.
    // clang compiler is working now.

    // variable, pre increment, pre decrement, takes the final value, for the first 2 terms.

    // x+++x = x++ + x;
    // as "post" as more precedence.

    int y;
    scanf("%d", &y);
    (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0) ? printf("YES") : printf("NO");
}
