// This program helps to find the pair of elements in an array whose sum is equal to a given sum.
#include<stdio.h>
int main(){
    int n,i,sum,a[10];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    printf("pairs of elements whose sum is equal to %d are:\n",sum);
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d and %d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}