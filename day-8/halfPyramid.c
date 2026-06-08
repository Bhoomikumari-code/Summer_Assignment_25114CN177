// This program prints the half pyramid pattern.
#include<stdio.h>
int main(){
    int i,j,m;
    printf("Enter rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}