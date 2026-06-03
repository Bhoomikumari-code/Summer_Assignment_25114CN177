//This program finds the largest prime factor of a number.
#include<stdio.h>
int main(){
    int n,i,flag,largest;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            flag=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    flag++;
                }
            }
        if(flag==2){
        largest=i;
        }
        }
    }
    printf("The largest prime factor is:%d ",largest);
    return 0;
}