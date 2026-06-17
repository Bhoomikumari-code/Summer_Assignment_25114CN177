// This program helps to merge two arrays into a single array.
#include<stdio.h>
int main(){
    int n,m,i,sum,a[100];
    printf("Enter the size of two array :");
    scanf("%d%d",&n,&m);
    printf("Enter the element of first array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element of second array :");
    for(i=0;i<m;i++){
        scanf("%d",&a[n+i]);
    }
    printf("array after merge is\n");
    for(int i=0;i<n+m;i++){
        printf("%d ",a[i]);
    }
    return 0;
}