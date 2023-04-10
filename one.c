#include <stdio.h>
#include <math.h>
int main()
{

    // from point 1
    int n;
    scanf("%d", &n);
    int flag = 0, x = sqrt(n);

    for (int i = 2; i <= x; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {

        if (n == 1)
        {
            printf("1 is neither prime nor composite");
        }
        else
        {
            printf("Its a prime");
        }
    }
    else
    {
        printf("not prime");
    }
}

// determine given number is prime or not?
// exactly if 2 factors, then prime number.

// 1.for any composite number, we can find out at least one factor in the range from, 2 to sqrt n.
// So, any number u can call its prime, if it doesnt have a factor from 2 to sqrt n.

// 2. Other than 2, 3, every prime can be expressed as 6*i +- 1 . (but 6*i +- 1 may or may not be prime).
