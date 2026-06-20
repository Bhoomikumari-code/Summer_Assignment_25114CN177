// This program helps to multiply the matrix.
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j,k;
    printf("Enter dimension of first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the dimension of second matrix:");
    scanf("%d%d",&r2,&c2);
    printf("Enter the element of first matrix:");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of second matrix:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
          c[i][j]=0;
          for(k=0;k<c1;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
        }
    }
    printf("The resultant matrix is=");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}