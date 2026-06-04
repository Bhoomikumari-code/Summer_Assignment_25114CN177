//This program finds the power without using pow().
#include<stdio.h>
int main(){
    int n,p,i,num=1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a power:");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        num=num*n;
    }
    printf("The result is:%d",num);
    return 0;
}