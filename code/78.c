//Write a program in C to Calculate the length of the string using a pointer.

#include <stdio.h>
int main()
{
    char s[100];
    gets(s);
    char *ptr;
    ptr = s;
    int len=0;
    while(*ptr!='\0') {
        len++;
        ptr++;
    }
    printf("String length is %d\n", len);
    return 0;
}