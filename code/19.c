// 19.Write a C program that read any binary number and display equivalent decimal number.
#include<stdio.h>
#include<math.h>
int main(){
    int n,i,d;
    printf("Enter a binary number\n");
    scanf("%d",&n);
    d=0;
    for(i=0;n!=0;i++)
    {
        d=d+(n%10)*pow(2,i);
        n=n/10;
    }
    printf("%d\n",d);
}

