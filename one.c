#include <stdio.h>
#include <math.h>

int isprime(unsigned long n)
{
    if (n == 2 || n == 3)
        return 1;
    if (n == 1 || n % 2 == 0 || n % 3 == 0)
        return 0;

    unsigned long x = sqrt(n);
    for (unsigned long i = 5; i <= x; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{

    // another logic: from point 2.
    // very very optimised one.
    unsigned long n;
    scanf("%ld", &n);

    if (isprime(n))
    {
        printf("prime");
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

// all prime numbers are positive. there are no negetive primes.
//  unsigned long is faster than signed, as thers no need to verify the sign bit in unsigned.
