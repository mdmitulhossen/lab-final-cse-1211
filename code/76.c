//Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>

int main()
{
    int num1, num2, *ptr1, *ptr2;
    scanf("%d%d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    if(*ptr1>*ptr2) {
        printf("%d is greater\n", *ptr1);
    } else {
        printf("%d is greater\n", *ptr2);
    }
    return 0;
}