//This programe help to print Armstrong numbers in a range.
#include<stdio.h>
int main(){
    int i,n,temp,result=0,num,rem;
    printf("Enter the range:");
    scanf("%d",&n);
    printf("The Armstrong numbers in the given range are:");
    for(i=1;i<=n;i++){
        temp=i;
        num=i;
        result=0;
        while(num!=0){
            rem=num%10;
            result=result+rem*rem*rem;
            num=num/10;
        }
    if(temp==result){
        printf("%d,",i);
    }
    }
    return 0;
}