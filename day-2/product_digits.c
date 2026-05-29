//This program find product of digits.
#include<stdio.h>
int main(){
    int n,digit,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("The product of the digits is:%d",product);
    return 0;
}