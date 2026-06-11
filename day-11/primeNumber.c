// This program check the prime number by using function.
#include<stdio.h>
int primeNum(int a);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    primeNum(n);
    return 0;
}

int primeNum(int x){
    for(int i = 2; i <= x; i++){
        if(x % i == 0){
            printf("%d is not a prime number", x);
            return 0;
        }
        else {
            printf("%d is a prime number\n", x);
            return 1;
        }
    }
}
