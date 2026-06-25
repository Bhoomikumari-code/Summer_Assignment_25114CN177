// This program prints the character frequency
#include<stdio.h>
int main(){
    int count=0;
    char str[100],ch;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character:");
    scanf("%c",&ch);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("Frequency of %c=%d",ch,count);
    return 0;
} 