//This program help to convert decimal to binary.
#include<stdio.h>
int main(){
    int n,num,binary=0,place=1;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    printf("The conversion of %d into Binary is:",n);
    while(n>0){
        num=n%2;
        binary=binary+(num*place);
        place=place*10;
        n=n/2;
    }
    printf("%d",binary);
    
    return 0;
}