// This program prints the two number by using function.
#include<stdio.h>
int sumNum(int a,int b);
int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    int s=sumNum(a,b);
    printf("Sum is %d",s);
    return 0;
}

int sumNum(int x,int y){
    return x+y;
}