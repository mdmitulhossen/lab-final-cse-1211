// Write a C program to find length of a string.

#include<stdio.h>
#include<string.h>
//Without Using Library Function
int main(){
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0'){
        i++;
    }
    printf("Length of the string is: %d", i);
    return 0;
}


//Using Library Function
// int main(){
//     char str[100];
//     int i = 0;
//     printf("Enter a string: ");
//     gets(str);
//     printf("Length of the string is: %d", strlen(str));
//     return 0;
// }