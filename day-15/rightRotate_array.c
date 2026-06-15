// This program helps to right rotate the elements of an array.
#include<stdio.h>
int main(){
    int n,i,a[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The right rotated array is: ");
    printf("%d ",a[n-1]);
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}