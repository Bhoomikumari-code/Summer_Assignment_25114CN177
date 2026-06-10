// This program prints the character pyramid.
#include<stdio.h>
int main(){
    int n;
    printf("Enter row :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // print space
        for(int spc=1;spc<=n-i;spc++){
            printf(" ");
        }
        // print increasing sequence
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        // print decreasing sequence
        for(int k=i-1;k>=1;k--){
            printf("%c",k+64);
        }
        printf("\n");
    }
    return 0;
}