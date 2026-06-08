//This program prints the sum of digits using recursion.
#include<stdio.h>
int sumDigit(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("the sum of digit is:%d",sumDigit(n));
    return 0;
}

int sumDigit(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumDigit(n/10);
}