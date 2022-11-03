// 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms (use pow() function)

#include<stdio.h>
#include <math.h>
int main(){
    int n;
    float i,sum=0;
    printf("Enter the N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int term;
        term = 2*i-1;
        sum=sum+(pow(term,2)/pow(term,3));
        printf("%d^2/%d^3 + ",(int)term,(int)term);
    }
    printf("\b\b\b = %lf",sum);
    return 0;
}