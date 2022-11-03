// 26.		1+ 1/2 + 1/3 + 1/4 + 1/5 + ............ 1/N
#include<stdio.h>
int main(){
    int n;
    float i,sum=0;
    printf("Enter the N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(1/i);
        printf("1/%d + ",(int)i);
    }
    printf("\b\b\b = %lf",sum);
    return 0;
}