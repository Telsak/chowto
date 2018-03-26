/*  Fig. 4.5:   fig04_05.c
 *  Summation with for */
#include <stdio.h>
int main(void) {
    int sum, number = 0;
    for (number=2; number<=100; number+=2) {
        sum += number;
    }

    printf("Sum is %d\n", sum);
    return 0;
}
