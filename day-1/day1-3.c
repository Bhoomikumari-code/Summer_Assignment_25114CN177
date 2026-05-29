#include<stdio.h>
int main(){
    int n,i,factorial=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        factorial=factorial*i;
    }
    printf("the factorial of given number is=%d",factorial);
    return 0;
}