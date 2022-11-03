//Write a program in C to store n elements in an array and print the elements using pointer.

#include <stdio.h>

int main()
{
    int arr[100], size, i;
    int *ptr;
    scanf("%d", &size);
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    printf("The array is: \n");
    for(i=0;i<size;i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}