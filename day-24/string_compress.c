// This program help to compress the string
#include<stdio.h>
#include<string.h>
int main(){
    int i,count;
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    
    for(i=0; str[i]!='\0';i++){
        count=1;
    while(str[i]==str[i+1]){
        count++;
        i++;
    }
    printf("%c%d",str[i],count);
}
return 0;
}