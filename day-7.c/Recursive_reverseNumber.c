//This program prints the reverse number using recursion.
#include<stdio.h>
int revNum(int n,int rev);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Reverse number:%d",revNum(n,0));
    return 0;
}

int revNum(int n,int rev){
    if(n==0){
        return rev;
    }
    rev=rev*10+n%10;
    return revNum(n/10,rev);
}