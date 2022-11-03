// is Prime or Not using Recursion
#include <stdio.h>
 
// Returns true if n is prime, else
// return false.
// i is current divisor to check.
int isPrime(int n, int i)
{
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    return isPrime(n, i - 1);
}
 
// Driver Program
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isPrime(n, n / 2))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}