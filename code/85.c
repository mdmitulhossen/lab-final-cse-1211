//Write a program in C to read array elements and print with addresses.

#include <stdio.h>
int main()
{
    int arr[100]; //declaring array of size 100;
    int size, i;
    scanf("%d", &size); //taking input from user to get the preferred size of array
    
    //reading the array elements
    for(i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    //printing the elements as well as the index and address
    for(i = 0; i<size; i++) {
        printf("Index= %d , Elements= %d, Index address= %x\n", i, arr[i], &arr[i]);
    }


    return 0;
}