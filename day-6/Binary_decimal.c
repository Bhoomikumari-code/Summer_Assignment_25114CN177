//This program helps to convert Binary too decimal.
#include<stdio.h>
#include<math.h>
int main(){
    int n,digit,num=0,count=0;
    printf("Enter a Binary number:");
    scanf("%d",&n);
        while(n>0){
            digit=n%10;
            num=num+(digit*pow(2,count));
            n=n/10;
            count++;
        }
        printf("%d",num);
        return 0;
}