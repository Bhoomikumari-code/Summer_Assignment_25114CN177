//This program prints the GCD of two numbers.
#include<stdio.h>
int main(){
    int i,j,m,n,gcd=1;
    printf("Enter two numbers:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++){
        if(m%i==0){
            for(j=1;j<=n;j++){
                if(n%j==0){
                    if(i==j){
                        gcd=i;
                    }
                }
            }
        }
    }
    printf("GCD:%d",gcd);
    return 0;
}