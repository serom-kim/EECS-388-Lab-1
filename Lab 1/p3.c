// print all primes within a given bound
#include <stdio.h>

int main()
{
    int bound, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &bound);

    printf("Primes within %d: ", bound);

    if (bound < 2) // numbers smaller than 2 have no primes within them
    {
        printf("No primes.\n");
        return 0;
    }

    for (i = 2; i <= bound; i++) //inclusive to the boundary
    {
        isPrime = 1; // first assume num is prime

        for (j = 2; j * j <= i; ++j) // loops from 2 to square root i for optimization
        {
            if (i % j == 0) // if divisor is found
            {
                isPrime = 0; // mark num as not prime
                break;
            }
        }

        if (isPrime == 1)
        printf("%d ", i);
    }
    printf("\n");
    return 0;

}