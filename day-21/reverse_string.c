// This program help to reverse a string
#include<stdio.h>
int main(){
    char str[100],rev[100];
    int length=0,i;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    for(i=0;i<length;i++){
        rev[i]=str[length-i-1];
    }
    rev[length]='\0';
    printf("Reverse of the string is: %s",rev);
    return 0;
}

    
