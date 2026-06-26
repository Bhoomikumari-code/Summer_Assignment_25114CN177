// This program helps to check the anagram string
#include<stdio.h>
int main(){
    char str[100],ctr[100];
    
    printf("Enter first string:");
    scanf("%s",str);

    printf("Enter second string:");
    scanf("%s",ctr);

    for(int i=0; str[i]!='\0'; i++){
        int found=0;

        for(int j=0; ctr[j]!='\0'; j++){
            if(str[i]==ctr[j]){
                found=1;
                break;
            }
        }

        if(found==0){
            printf("not anagram");
            return 0;
        }  
    }
    printf("anagram");
    return 0;
}