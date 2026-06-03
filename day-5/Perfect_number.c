//This program checks the perfect number.
#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("The number is perfect ");
    }
    else{
        printf("The number is not perfect");
    }
    return 0;
}
