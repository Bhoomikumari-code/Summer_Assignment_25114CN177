// This program help to check the palindrome string
#include<stdio.h>
int main(){
    int length=0,i,flag=1;
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0';i++){
        length++;
    }
    for(int i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("string is palindrome");
    }
    else{
        printf("stirng is not palindrome");
    }
    return 0;
}