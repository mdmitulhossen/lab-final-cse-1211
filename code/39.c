// 39.		     1
//          2       2
//      3      3      3
//          2      2
//             1

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
        isEven(c) ? printf(" ") : printf("%d",k);
        // if (isEven(c)) printf(" ");
        // else printf("%d", k);

    }
    printf("\n");
  }

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      isEven(c) ? printf(" ") : printf("%d",n-k);

    printf("\n");
  }

  return 0;
}
