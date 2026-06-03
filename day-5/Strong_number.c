//This program checks the Strong number.
#include<stdio.h>
int main(){
    int n,i,sum=0,temp,digit,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        digit=n%10;
        fact=1;
        for(i=1;i<=digit;i++){
           fact=fact*i;
        }
          sum=sum+fact;
          n=n/10;
    }
    if(sum==temp){
        printf("The given number is strong");
    }
    else{
        printf("The given number is not strong");
    }
    return 0;
}