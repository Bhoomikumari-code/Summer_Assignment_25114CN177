// This program finds the maximum number using function.
#include<stdio.h>
int maxNum(int a,int b);
int main(){
    int num1,num2;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    int max=maxNum(num1,num2);
    printf("Maximum number is %d",max);
    return 0;
}

int maxNum(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}