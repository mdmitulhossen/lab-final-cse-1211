// 20.		Write a C program that read any octal number and display equivalent decimal number.

#include<stdio.h>
#include<math.h>
int main(){
    int n,i,d;
    printf("Enter a octal number\n");
    scanf("%d",&n);
    d=0;
    for(i=0;n!=0;i++)
    {
        d=d+(n%10)*pow(8,i);
        n=n/10;
    }
    printf("%d\n",d);
}