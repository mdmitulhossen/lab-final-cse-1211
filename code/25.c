// 1+3+5+7+................upto n’th term

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        sum=sum+i;
        printf("%d + ",i);
    }
    printf("\b\b\b = %d",sum);
    return 0;
}