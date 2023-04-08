#include <stdio.h>
int main()
{

    printf("%ld", sizeof(long long int)); // 8
    printf("%ld", sizeof(long double));   // 16

    printf("%ld", sizeof(10));    // 4
    printf("%ld", sizeof(10l));   // 8
    printf("%ld", sizeof(10L));   // 8
    printf("%ld", sizeof(10.3));  // 8  (double)
    printf("%ld", sizeof(10.3f)); // 4 (float)
    printf("%ld", sizeof('A'));   // 4  (by default, character gets promoted to int)
    printf("%ld", sizeof(char));  // 1
}
