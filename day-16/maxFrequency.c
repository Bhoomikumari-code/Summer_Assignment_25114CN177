// This program helps to find the max frequency of an element in the array.
#include<stdio.h>
int main(){
    int i,n,max=0,maxElement;
    int arr[10]={1,2,3,4,5,1,2,1,3,4};
    n=10;
    for(i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            maxElement=arr[i];
        }
    }
    printf("The element with maximum frequency is: %d",maxElement);
    printf("\nThe maximum frequency is: %d",max);
    return 0;
}