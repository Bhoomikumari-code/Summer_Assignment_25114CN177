// This program prints the Fibonacci by using function.
#include<stdio.h>
int fibonacci();
int main(){
    fibonacci();
    return 0;
}

int fibonacci(){
    int a=0,b=1,c,n;
    printf("Enter number of terms :");
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(int i=3;i<=n;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    return 0;
}