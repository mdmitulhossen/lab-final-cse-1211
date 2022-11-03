// Write a C program to find highest frequency character in a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i,j,count,max,maxcount;
    printf("Enter a string\n");
    gets(str);
    max=str[0];
    maxcount=0;
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
                count++;
        }
        if(count>maxcount){
            maxcount=count;
            max=str[i];
        }
    }
    printf("%c\n",max);
}