//Write a program in C to reverse array elements using pointer.

#include<stdio.h>

int main()
{
	int size;
	
	scanf("%d", &size);
	int a[100];
	printf("Enter numbers: ");
	for(int i=0; i<size; i++)
		scanf("%d", &a[i]);
    
    int *p = a; //pointing to the first element
	int *first = p;
	int *last = p+size-1;

    //swapping the last element with first element
	while(first<last)
	{
		int temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
	printf("Reversed array elements are: ");
	for(int i=0; i<size; i++)
		printf("%d ", *p++);
	return 0;
}