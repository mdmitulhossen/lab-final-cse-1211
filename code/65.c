// Write a program in C to create and store information in a text file.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[30];
    FILE *fp;
    fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        printf("Error!! ");
        exit(1);
    }

    printf("Enter any sentence:");
    gets(str);
    fprintf(fp, "%s\n", str);
    fclose(fp);
    printf("The file test.txt created successfully...!! ");
}