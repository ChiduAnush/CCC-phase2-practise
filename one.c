#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            int t = a[low];
            a[low] = a[mid];
            a[mid] = t;
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            int t = a[high];
            a[high] = a[mid];
            a[mid] = t;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
