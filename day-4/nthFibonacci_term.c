//This program finds the nth Fibonacci term.
#include<stdio.h>
int main(){
    int i,n,first=0,second=1,next;
    printf("Enter the position:");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive integer.");
    }
    else{
        for(i=2;i<=n;i++){
        next=first+second;
            first=second;
            second=next;
        }
        printf("the number at the given position is:%d",first);
    }
    return 0;
}