/*
Write a program in C to read an existing file. 
Test Data : 
Input the file name to be opened : test.txt 
Expected Output :
 The content of the file test.txt is  :                                                                       
This is the content of the file test.txt.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp==NULL) {
        printf("Error!!!");
        return 0;
    }
    const unsigned MAX_LENGTH = 256;
    char ch[MAX_LENGTH];

    while (fgets(ch, MAX_LENGTH, fp))
        printf("%s", ch);

    fclose(fp);

    return 0;
}