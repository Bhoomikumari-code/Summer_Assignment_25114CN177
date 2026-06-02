//This program check the Armstrong number.
#include<stdio.h>
int main(){
    int n,temp,num,result=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        num=n%10;
        result=result+num*num*num;
        n=n/10;
    }
    if(temp==result)
        printf("The number is Armstrong");
     else
        printf("number is not Armstrong");
     return 0;
}
