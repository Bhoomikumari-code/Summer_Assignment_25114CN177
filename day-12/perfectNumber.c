// This program prints the perfect number by using function.
#include<stdio.h>
void perfectNum();
int main(){
    perfectNum();
    return 0;
}

void perfectNum(){
    int n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("%d is a perfect number",n);
    }
    else{
        printf("%d is not perfect number",n);
    }
}