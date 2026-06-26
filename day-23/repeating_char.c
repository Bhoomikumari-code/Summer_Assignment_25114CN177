//This program help to find the first repeating chrarcter 
#include<stdio.h>
int main(){
    int count=0;
    char str[100];
    printf("enter a string:");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]=!'\0'; i++){
        int found=0;
        for(int j=i+1; str[j]!='\0'; j++){
            if( str[i]==str[j]){
            found=1;
            break;
            }
        }
        if(found==1){
            printf("The first repeating character is %c",str[i]);
            return 0;
        }
    }
    printf("there is no repeating character");
    return 0;
}