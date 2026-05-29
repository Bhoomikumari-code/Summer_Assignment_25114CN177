//This program checks the number is palindrome or not.
#include<stdio.h>
int main(){
    int n,digit,reverse=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(temp==reverse){
        printf("The number is Palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}