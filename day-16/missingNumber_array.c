// This program helps to print the missing number in the array.
#include<stdio.h>
int main(){
    int i,sum=0,sum1=0;
    int n=6;
    int arr[6]={1,2,3,5,6};
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    sum1 = n*(n+1)/2;
    printf("The missing number is: %d",sum1-sum);
    return 0;
}