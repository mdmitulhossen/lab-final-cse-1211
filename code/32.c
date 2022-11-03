/*  
Write a program to display the following pattern with respect to its row number.
i.e. for row number 3
    A
  B  B
C  C  C

*/
#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}
int main()
{
  int n, c, k;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= n-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++){
        //using Ternery Operator for reducing lines of code
        isEven(c) ? printf(" ") : printf("%c" , 64+k);
        // if (isEven(c)) printf(" ");
        // else printf("%d", k);

    }
    printf("\n");
  }

  

  return 0;
}