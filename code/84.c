//Write a program in C print a string in reverse using a Pointer

#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    int i, len;
    for(i=0; str1[i]!='\0'; i++) {
        len++;
    }
    char *pchar1, *pchar2;
    pchar1 = str1+(len-1);
    pchar2 = str2;
    while (pchar1>=str1)
    {
        *pchar2 = *pchar1;
        *pchar1--, *pchar2++;
    }
    *pchar2 = '\0';

    printf("Reverse string is: %s\n", str2);
    
    return 0;
}