// This program helps to left rotate the elements of an array.
#include<stdio.h>
int main(){
    int n,i,a[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The left rotated array is: ");
    for(i=1;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("%d ",a[0]);
    return 0;
}