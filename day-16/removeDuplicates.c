// This program helps to remove duplicates from an array.
#include<stdio.h>
int main(){
    int n=10,i,j,temp;
    int a[10]={1,2,3,4,5,2,3,6,7,8};
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                temp=a[j];
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}