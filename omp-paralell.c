#include <stdio.h>
#include <omp.h>

int main(void)
{
    #pragma omp parallel for
    for (int index = 0; index < 10; index++)
    {
        printf("Thread ID is %d and index is: %d\n", omp_get_thread_num(),index);
    }
    return 0;
}
