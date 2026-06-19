// This program help to find the sum of diagonal elements
#include<stdio.h>
int main(){
    int i,j,a[10][10],sum=0;
    printf("Enter matrix element:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Sum of diagonal elements
    for(i=0;i<3;i++){
        sum=sum+a[i][i];
    }
        printf("%d",sum);
    return 0;
}