// This program help to remove the spaces from the string
#include<stdio.h>
int main(){
     int count=0,i;
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[count]=str[i];
            count++;
        }
    }
    str[count]='\0';
    printf("String after removing the spaces: %s",str);
    return 0;
}

