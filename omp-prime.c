#include <stdio.h>
#include <omp.h>

int main()
{
    int i, j, end, isPrime; // isPrime is used as flag variable

    // input upper limit to print prime
    printf("Find prime numbers between 1 to: ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    // find all prime numbers 1 <-> end
    for (i=2; i<=end; i++)
    {
        // assume the current number is Prime
        isPrime = 1;

        // check if current number is prime or not
        #pragma omp parallel 
        for (j=2; j<=i/2; j++)
        {
            // if its divisible by any other than 1 and itself
            // its not a prime number
            if (i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        // if the number is prime, then print
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
