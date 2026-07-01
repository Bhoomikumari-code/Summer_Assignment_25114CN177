//This program checks the number is prime or not.
#include<stdio.h>
int main(){
    int n,i,flag=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<=1){
        printf("Number is not prime");
        return 0;
    }
    
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
        if(flag==0){
            printf("Number is prime");
        }
        else{
            printf("Number is not prime");
        }
return 0;
}