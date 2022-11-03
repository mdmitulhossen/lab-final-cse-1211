//Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>

int main()
{
    char s[100];
    char *ptr;
    gets(s);
    ptr = s;
    int countVowel=0, countConsonent=0,space=0;
    while(*ptr != '\0') {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o'||*ptr=='u'|| *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U') {
            countVowel++;
        }
        else if(*ptr==' ')
            space++;
        else {
            countConsonent++;
        }
        ptr++;
    }
    printf("Number of vowels is: %d\n", countVowel);
    printf("Number of consonent is is: %d\n", countConsonent);
    
    return 0;
}