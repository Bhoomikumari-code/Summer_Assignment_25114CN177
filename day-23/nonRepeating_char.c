// This program helps to find the  first non-repeating character in string
#include<stdio.h>
int main(){
    int count=0;
    char str[100],ch;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0'; i++){
        int found=0;
        for(int j=0;str[j]!='\0'; j++){
            if(i!=j && str[i]==str[j]){
                found=1;
                break;
            }
        }
            if(found==0){
        printf("The non repeating character is %c\n",str[i]);
        return 0;
            }
        }
            printf("There is no non repeating character");
    return 0;
}
