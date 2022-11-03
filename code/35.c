/*
Write a program to display the below pattern with respect to its row number
i.e. for row number 5
*
***
*****
*******
*/

#include <stdio.h>
int main()
{
    int i, j, row;
    scanf("%d", &row);
    for(i=1; i<=row; i++) {
        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }printf("\n");
    }
    return 0;
}