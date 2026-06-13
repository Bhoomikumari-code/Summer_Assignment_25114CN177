//This program calculates the sum and average of array.
#include<stdio.h>
int main(){
    int n,i,a[100],sum=0;
    float avg;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){   
        scanf("%d",&a[i]);
    }                                                                   
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Sum of array elements is: %d\n",sum);
    printf("Average of array elements is: %f\n",avg);
    return 0;
}