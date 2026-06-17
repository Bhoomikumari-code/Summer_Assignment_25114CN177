// This program prints the common element of array.
#include<stdio.h>
int main(){
    int n,m,i,j,a[100],b[100];
    printf("Enter the size of two array :");
    scanf("%d%d",&n,&m);
    printf("Enter the element of first array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element of second array :");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("The common element of array is:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        if(a[i]==b[j]){
            printf("%d",a[i]);
            break;
        }
    }
}
    return 0;
}