// This program help to Subtract the matrices.
#include<stdio.h>
int main(){
    int i,j,n,m,a[10][10],b[10][10],c[10][10];
    printf("Enter the size of first and second matrix:");
    scanf("%d%d",&n,&m);
    //Element of first matrix
    printf("Enter the element of first matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Element of second matrix
    printf("Enter the element of second matrix:");
        for(i=0;i<n;i++){
         for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //Subtraction of both matrix
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
             c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("The subtraction of two matrix is:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
    printf("\n");
    }
    return 0;
}