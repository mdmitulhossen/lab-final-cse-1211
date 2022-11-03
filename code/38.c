/*
Write a program to print the below pattern
        1
       1  1
     1  2  1
   1  3  3   1
  1  4   6   4  1
1  5  10  10  5  1

*/

#include <stdio.h>
int main() {
   int rows, num = 1, space, i, j;
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            num = 1;
         else
            num = num * (i - j + 1) / j;
         printf("%4d", num);
      }
      printf("\n");
   }
   return 0;
}