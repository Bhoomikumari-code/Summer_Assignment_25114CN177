// This program prints the Armstrong number by using function.
#include<stdio.h>
void armstrong();
int main(){
    armstrong();
    return 0;
}

void armstrong(){
    int n,num,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;
    }
    if(temp==sum){
        printf("%d is Armstrong",temp);
    }
    else{
        printf("%d is not Armstrong",temp);
    }
}