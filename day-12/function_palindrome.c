// This program prints the palindrome by using function.
#include<stdio.h>
void palindrome( );
int main(){
    palindrome();
    return 0;
}

void palindrome(){
    int n,num,rev=0;
    printf("Enter a number :");
    scanf("%d",&n);
    int temp=n;
    while(n !=0){
        num=n%10;
        rev=rev*10+num;
        n=n/10;
    }
    if(temp==rev){
    printf("%d is palindrome",temp);
    }
    else{ 
    printf("%d is not palindrome",temp);
    }
}