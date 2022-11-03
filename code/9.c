// Write a C program to compare two strings.

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

    char str1[100],str2[100];
    int i,j,count=0;

    printf("Enter string1: ");
    gets(str1);

    printf("Enter String2: ");
    gets(str2);


    int len1 = len(str1);
    int len2 = len(str2);

    for(i=0,j=0;i<len1,j<len2;i++,j++){
        if(str1[i]!=str2[j]){
            count++;
        }
    }

    count==0?printf("Strings are equal"):printf("Strings are not equal");



}