//This program takes an integer from the user and reverse it.
#include<stdio.h>
int main(){
    int n,digit,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("The reverse of the given number is:%d",rev);
    return 0;
}