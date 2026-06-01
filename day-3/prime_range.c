//This programe print the prime numbers in the range.
#include<stdio.h>
int main(){
    int i,j,n,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        flag=0;
        for (j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
    if(flag==0){
        printf("%d\n",i);
    }
}
    return 0;
}