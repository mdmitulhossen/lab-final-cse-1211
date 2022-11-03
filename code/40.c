/*
Write a C Program to Print the below pattern with respect to its row number
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <stdio.h>

int main()
{
    int row, i, j;
    scanf("%d", &row);
    for(i = row; i>=1; i--) {
        for(j = 1; j<=i; j++) {
            printf("%d ", j);
        } printf("\n");
    }
    return 0;
}