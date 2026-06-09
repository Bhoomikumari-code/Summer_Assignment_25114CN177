// This program prints the reverse star pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}