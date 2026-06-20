// This program helps to check the symmetric matrix
#include<stdio.h>
int main(){
    int i,j,n,flag=1,a[10][10];
    printf("Enter the order of matrix:");
    scanf("%d",&n);
    printf("Enter the element of matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("Matrix is symmetric");
    }
    else{
        printf("Matrix is not symmetric");
    }
    return 0;
}