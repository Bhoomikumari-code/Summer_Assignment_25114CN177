// This program help to find the string length without using strlen()
#include<stdio.h>
int main(){
    int length = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }
    printf("Length of the string is: %d", length);
    return 0;
}