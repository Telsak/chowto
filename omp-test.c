// omp-test.c - OpenMP test for standard for loop counter
// Fig. 4.2: fig04_2.c
// Counter-controlled repetition with the for statement
#include <omp.h>
#include <stdio.h>

// function main begins program execution
int main ( void )
{
    int counter; // define counter

    // initialization, repetition condition, and increment
    // are all included in the for statement header
    #pragma omp parallel
    for ( counter = 1; counter <= 10; counter++ ) {
        printf( "%d - thread:%d\n", counter, omp_get_thread_num() );
    } // end for statement

    return 0; // indicate program ended successfully
} // end function main
