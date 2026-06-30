// This program help to find the common character in strings
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i,j,flag=0;
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    printf("Common characters are: ");
    for(i=0;str1[i]!='\0';i++){
        for(j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j]){
                printf("%c ",str1[i]);
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("No common characters found.");
    }
    return 0;
}