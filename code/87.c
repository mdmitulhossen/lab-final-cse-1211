// Write a program in C to find the largest element using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int n;
  int *num;
  scanf("%d", &n);
 
  
  num = (int *)calloc(n, sizeof(int));
  if (num == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }
 
  
  for (int i = 0; i < n; ++i) {
  
  scanf("%d", num + i);
  }
 
  
  for (int i = 1; i < n; ++i) {
    if (*num < *(num + i)) {
      *num = *(num + i);
    }
  }
  printf("Largest number = %d", *num);
 
  free(num);
 
  return 0;
}