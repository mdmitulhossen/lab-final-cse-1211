//Write a program in C to compute sum of array elements using pointer.

#include <stdio.h>

int main()
{
    int i, size, *p,arr[100], sum = 0;

    scanf("%d", &size);
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    p = arr;

    for(i = 0; i<size; i++) {
        sum+=*p;
        *p++;
    }
    printf("%d", sum);

    return 0;
}