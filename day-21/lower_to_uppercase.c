// This program help to cenvert the lowercase string to uppercase string
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("Uppercase of the string is: %s",str);
    return 0;
}