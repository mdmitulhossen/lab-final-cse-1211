//Write a program in C to swap two numbers using pointers

#include <stdio.h>

//declaring and writting a function to swap two numbers.
void swap(int *a, int *b)
{
    int temp;   
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers to swap: ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping the numbers are respectively num1= %d and num2= %d\n", num1 , num2);

    swap(&num1, &num2); //passing value as well as addresses of the variable
    printf("After swapping the numbers are respectively num1= %d and num2= %d\n", num1 , num2);


    return 0;
}