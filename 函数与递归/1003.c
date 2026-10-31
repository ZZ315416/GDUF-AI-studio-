#include <stdio.h>
int main()
{
    long long a;
    scanf("%lld", &a);
    long long p = a, r = a / 10;
    while (r)
    {
        p = p * 10 + r % 10;
        r /= 10;
    }
    int isPrime = 1;
    if (p % 2 == 0) { 
        isPrime = 0;
    } else {
        for (long long i = 3; i * i <= p; i += 2) {
            if (p % i == 0) { isPrime = 0; break; }
        }
    }
    printf(isPrime ? "prime" : "noprime");
    return 0;
}