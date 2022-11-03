// printing and summatation
// 1+2+3+4+..................upto n’th term.

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
        printf("%d + ",i);
    }
    printf("\b\b\b = %d",sum);
    return 0;
}