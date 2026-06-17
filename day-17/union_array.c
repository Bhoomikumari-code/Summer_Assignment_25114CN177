// This program makes the union of array.
#include<stdio.h>
int main(){
    int n,m,i,j,a[100];
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
    printf("The union of array is:");
    for(i=0;i<n+m;i++){
        int flag=0;
        for(j=0;j<i;j++){
        if(a[i]==a[j]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d ",a[i]);
    }
    }
    return 0;
}