// Write a C program to concatenate two strings.


#include<stdio.h>

int len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}


int main(){
    int i,j;
    char str1[100],str2[100];
    printf("Enter string1: ");
    gets(str1);

    printf("Enter String2: ");
    gets(str2);

    int len1 = len(str1);
    int len2 = len(str2);

    for(i=len1,j=0;i<len2,j<len2;i++,j++){
        str1[i] = str2[j];
    }

    str1[i]='\0';

    printf("Concatenated string is: %s", str1);

    
}