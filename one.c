#include <stdio.h>
int main()
{

    int x = -1, y = 20, z;
    z = ++x || ++y;
    printf("%d %d %d", x, y, z);
}
