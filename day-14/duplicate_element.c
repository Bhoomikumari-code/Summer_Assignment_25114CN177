// This program helps to find the duplicate element in the array.
#include<stdio.h>
int main(){
    int n,i,a[100],count=0,j;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the element of array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The duplicate element in the array is :");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d\n",a[i]);
                break;
            }
        }
    }
    return 0;   
}