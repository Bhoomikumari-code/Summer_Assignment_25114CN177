// This program help to find the max occuring character
#include<stdio.h>
int main(){
    int count,max=0;
    char str[100],ch;
    printf("Enter a string:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        count=1;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j])
            count++;
        }
        if(count>max){
            max=count;
            ch=str[i];
        }
    }
    printf("Maximum occuring character=%c",ch);
    printf("\nfrequency=%d",max);
    return 0;
}