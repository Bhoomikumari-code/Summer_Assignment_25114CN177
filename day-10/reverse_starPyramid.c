// This program prints the reverse odd star pyramid.
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows :");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        //print space
        for(int spc=0;spc<=n-i;spc++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}