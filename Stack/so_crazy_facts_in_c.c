#include <stdio.h>

#define N 5

int main()
{
   #if N <= 5
   printf("I like You\n");

   #elif N > 5
   printf("You are awesome\n");
   #endif

   return 0;
}
