#include <stdio.h>
long long maxPrimeFactors(long long n)
{
    long long largest_prime = -1, i = 2;
    while (i * i <= n)
      {
        while (n % i == 0)
          {
            largest_prime = i;
            n = n / i;
        }
        i = i + 1;
    }
    if (n > 1) 
    {
        largest_prime = n;
    }
    return largest_prime;
}

int main()
{
    long long n = 15;
    printf("%lld\n", maxPrimeFactors(n));

    n = 25698751364526;
    printf("%lld\n", maxPrimeFactors(n));

    return 0;
}
