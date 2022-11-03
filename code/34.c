/*
Write a program to display below pattern with respect to its row number
i.e for row number 3
1
2 2
3 3 3
2 2
1
*/

#include <stdio.h>

int main()
{
    int row, i, j;
    scanf("%d", &row);
    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }printf("\n");
    }
    for(i=row-1; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }printf("\n");
    }
    return 0;
}