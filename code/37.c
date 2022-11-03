/*
Write a program to print the below pattern with respect to its row number.
i.e for row number of 3
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include <stdio.h>
int main() {
   int i, space, row, k = 0;
   
   scanf("%d", &row);
   for (i = 1; i <= row; ++i, k = 0) {
      for (space = 1; space <= row - i; space++) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}