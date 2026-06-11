// This program prints the factorial of a number by using function.
#include<stdio.h>
int factorial();
int main(){
    factorial();
    return 0;
}

int factorial(){
    int n,fact=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial is %d",fact);
    return 0;
}