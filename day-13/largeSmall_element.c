// This program finds the largest and smallest element in an array.
#include<stdio.h>           
int main(){
    int n,i,a[100],large,small;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){   
        scanf("%d",&a[i]);
    }                                                                   
    large=small=a[0];
    for(i=1;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }
    }
    printf("Largest element in array is: %d\n",large);
    printf("Smallest element in array is: %d\n",small);
    return 0;
}