// This program count the number of even and odd elements in an array.
#include<stdio.h>
int main(){
    int n,i,a[100],even=0,odd=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){   
        scanf("%d",&a[i]);
    }                                                                   
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even elements in array is: %d\n",even);
    printf("Number of odd elements in array is: %d\n",odd);
    return 0;
}