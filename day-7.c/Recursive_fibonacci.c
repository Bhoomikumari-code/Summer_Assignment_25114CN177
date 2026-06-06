//This program prints fibonacci series by using recursion.
#include<stdio.h>
int fib(int n);
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d\n",fib(i));
    return 0;
}

int fib(int n){
    if(n==0){
    return 0;
    }
    if(n==1){
    return 1;
    }
    int fib1=fib(n-1);
    int fib2=fib(n-2);
    int fibN=fib1+fib2;
    return fibN;
}