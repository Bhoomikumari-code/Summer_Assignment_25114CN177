// This program prints the second largest element in the array.
#include<stdio.h>
int main(){
    int n ,i,a[100],first,second;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    first=second=a[0];
    for(i=1;i<n;i++){
        if(a[i]>first){
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first){
            second=a[i];
        }
    }
    printf("The second largest element in the array is %d",second);
    return 0;
}