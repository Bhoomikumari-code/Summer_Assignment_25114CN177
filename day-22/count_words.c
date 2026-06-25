//This program help to count the word in the sentence
#include<stdio.h>
int main(){
    int count=1,i;
    char str[100];
    printf("Enter a sentence:");
    fgets(str, sizeof(str), stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
          count++;   
        }
    }
    printf("The number of words in a sentence is %d",count);
    return 0;
}