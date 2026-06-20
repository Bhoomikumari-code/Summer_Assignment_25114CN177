// This program helps to find the column-wise sum
#include<stdio.h>
int main(){
    int i,j,sum,a[10][10],n;
    printf("Enter the order of matrix:");
    scanf("%d",&n);
    printf("Enter the element of matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);    
        }
    }
// column-wise sum
 for(j=0;j<n;j++){
        sum=0;
        for(i=0;i<n;i++){
            sum= sum+a[i][j];
        }
        printf("Column-wise sum is=%d\n",sum);
    }    
    return 0;
}