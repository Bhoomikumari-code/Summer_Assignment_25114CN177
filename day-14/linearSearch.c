// This program helps to find the element by using linear search.
#include<stdio.h>
int main(){
    int n,i,a[100],key;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the elements of array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Element found at %d position",i+1);
            break;
        }
    }
    if(i==n){
        printf("Element not found in the array");
    }
    return 0;
}