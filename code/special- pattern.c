#include<stdio.h>
int main(){
    int n;
    float i,sum=1;
    printf("Enter the N: ");
    scanf("%d",&n);
    
    for(int i =1; i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d ",j);
        }
        
        printf("\n");
    }
    
    //printf("\n");
    
    for(int i =n-1; i>=1;i--){
        for(int j=1; j<=i;j++){
            printf("%d ",j);
        }
        
        printf("\n");
    }
    
    printf("\n");
    
    
    for(int i=0; i<=n; i++){
        for(int space=1; space<=n-i;space++){
            printf(" ");
        }
        
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        
        printf("\n");
    }
    
    //printf("\n");
    
    
    for(int i=n; i>=1; i--){
        for(int space=1; space<=n-i;space++){
            printf(" ");
        }
        
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        
        printf("\n");
    }
    
    
    for(int i=0; i<=n; i++){
        for(int space=1; space<=n-i;space++){
            printf(" ");
        }
        
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        
        printf("\n");
    }
    
    //printf("\n");
    
    
    for(int i=n; i>=1; i--){
        for(int space=1; space<=n-i;space++){
            printf(" ");
        }
        
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        
        printf("\n");
    }
    
}