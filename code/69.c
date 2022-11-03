// Write a program that count number of lower_case, upper_case, digit, space, line and other character in a file.

#include<stdio.h>
int main(){
    int i, c, lower_case = 0, upper_case = 0, digit = 0, space = 0, line = 0, other = 0;
    FILE *fp;
    fp = fopen("text.txt", "r");
    if(fp == NULL){
        printf("File not found");
        return 0;
    }
    while((c = fgetc(fp)) != EOF){
        if(c >= 'a' && c <= 'z'){
            lower_case++;
        }
        else if(c >= 'A' && c <= 'Z'){
            upper_case++;
        }
        else if(c >= '0' && c <= '9'){
            digit++;
        }
        else if(c == ' '){
            space++;
        }
        else if(c == '\n'){
            line++;
        }
        else{
            other++;
        }
    }
    printf("Lower case: %d\n", lower_case);
    printf("Upper case: %d\n", upper_case);
    printf("Digit: %d\n", digit);
    printf("Space: %d\n", space);
    printf("Line: %d\n", line);
    printf("Other: %d\n", other);
    fclose(fp);
    return 0;
}