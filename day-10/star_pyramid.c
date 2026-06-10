// This program prints the odd star pyramid.
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //print space
        for (int spc=1;spc<=n-i;spc++){
            printf(" ");
        }
        //print star pyramid
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}