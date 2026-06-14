// This program find the frequency of a element in the array.
#include<stdio.h>   
int main(){
    int n,i,key,count=0,a[100];
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the element of array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element whose frequency is to be found :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    printf("Frequency of %d is %d",key,count);
    return 0;
}