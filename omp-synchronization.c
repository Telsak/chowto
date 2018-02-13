#include <stdio.h>
#include <omp.h>

int main(void)
{
    int sum = 0;

    #pragma omp parallel for ordered
    for (int index = 0; index <= 10; index++)
    {
        #pragma omp critical
        sum += index;
        printf("%d", omp_get_num_threads());
    }

    printf("Sum is %d\n", sum);
    return 0;
}
