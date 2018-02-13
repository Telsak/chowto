// omp-test.c - OpenMP test for standard for loop counter
// Fig. 4.2: fig04_2.c
// Counter-controlled repetition with the for statement
#include <omp.h>
#include <stdio.h>
#include <time.h>

// function main begins program execution
int main ( void )
{
    clock_t t;
    int counter; // define counter

    // initialization, repetition condition, and increment
    // are all included in the for statement header
    
    t = clock();
    #pragma omp parallel
    for ( counter = 1; counter <= 1000000; counter++ ) {
        printf( "%d - thread:%d\n", counter, omp_get_thread_num() );
    } // end for statement
    t = clock() - t;
    double time_taken = ((double)t);
    printf("for loop took: %d seconds to complete", time_taken);
    return 0; // indicate program ended successfully
} // end function main
