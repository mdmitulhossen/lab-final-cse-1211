//Write a C program to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    printf("Enter string1: ");
    gets(str1);

    printf("Enter String2: ");
    gets(str2);

    strcpy(str2, str1);
    printf("This is from String 2: %s", str2);
    return 0;
}

// without using library function to copy string.
// #include <stdio.h>
// int main() {
//     char str1[100], str2[100], i;
//     printf("Enter string s1: ");
//     gets(str1);

//     for (i = 0; str1[i] != '\0'; ++i) {
//         str2[i] = str1[i];
//     }

//     str2[i] = '\0';
//     printf("String s2: %s", str2);
//     return 0;
// }