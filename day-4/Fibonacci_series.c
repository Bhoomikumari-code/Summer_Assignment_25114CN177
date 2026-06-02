//This programe helps to generate the fibonacci series.
#include<stdio.h>
int main(){
    int i,n,first=0,second=1,next;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive integer.");
    }
    else{
        for(i=0;i<=n;i++){
        printf("%d ",first);
        next=first+second;
            first=second;
            second=next;
        }
    }
    return 0;
}