// 23.		1^2+2^2+3^2+4^2+........N^2


#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i*i;
        printf("%d^2 + ",i);
    }
    printf("\b\b\b = %d",sum);
    return 0;
}