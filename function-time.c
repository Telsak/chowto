#include <time.h>
#include <stdio.h>

int main () {
   clock_t start_t, end_t;
   double i, total_t;

   start_t = clock();
   printf("Starting of the program, start_t = %ld\n", start_t);
    
   printf("Going to scan a big loop, start_t = %ld\n", start_t);
   for(i=0; i< 1000000000; i++) {
   }
   end_t = clock();
   printf("End of the big loop, end_t = %ld\n", end_t);
   
   total_t = difftime (end_t, start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f\n", total_t  );
   printf("Exiting of the program...\n");
   printf("clocks_per_sec: %d", CLOCKS_PER_SEC);
   return(0);
}
