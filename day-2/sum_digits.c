//This program takes an interger from user and find sum of digits.
#include<stdio.h>
int main(){
    int n,digit,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("The sum of digit of the number is:%d",sum);
    return 0;
}