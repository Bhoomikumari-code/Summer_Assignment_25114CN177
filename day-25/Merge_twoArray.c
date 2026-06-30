// This program help to merge the two sorted array
#include<stdio.h>
int main(){
    int i,j,temp,a[50],b[50],c[100],n,m,count=0;

    printf("Enter the size of both arrays: ");
    scanf("%d%d",&n,&m);
    printf("Enter the element of first array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element of second array:");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
        c[i]=a[i];
    for(i=0;i<m;i++)
        c[n+i]=b[i];
    for(i=0;i<n+m-1;i++){
        for(j=i+1;j<n+m;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("Merged sorted array:\n");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}