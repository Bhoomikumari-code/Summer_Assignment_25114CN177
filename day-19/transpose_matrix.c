// This program helps to find the trnaspose of matrix
#include<stdio.h>
int main(){
    int i,j,n,m,a[10][10];
    printf("Enter size of row and column:");
    scanf("%d%d",&n,&m);
    //Element of first matrix
    printf("Enter the element of matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Element of second matrix
    printf("The transpose of matrix is ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
        