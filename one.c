#include <stdio.h>
int main()
{

    // control structures:
    // write a program without semicolon

    char c;
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 97 && c <= 122))
        printf("latter");
    else if (c >= '0' && c <= '9')
        printf("digit");
    else
        printf("symbol");
}
