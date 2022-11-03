//Write a program in C to add two numbers using pointers.

#include <stdio.h>
int main()
{
    int num1, num2, *ptr1, *ptr2;
    scanf("%d%d", &num1, &num2);
    ptr1 = &num1, ptr2 = &num2;

    int sum=0;
    sum =  *ptr1+*ptr2;

    printf("The sum of two number is: %d", sum);
    return 0;
}