// 63.		Write a program in C to reverse a string using recursion.


#include <stdio.h>
void strrev();
int main() {
    printf("Enter a sentence: ");
    strrev();
    return 0;
}

void strrev() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        strrev();
        printf("%c", c);
    }
}

