//This program finds the LCM of two numbers.
#include<stdio.h>
int main(){
    int i,j,m,n,a,b,lcm=1;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b){
        for(i=1;i<=a;i++){
            m=a*i;
            if(m%b==0){
                lcm=m;
                break;
            }
        }
    }
    else{
        for(i=1;i<=b;i++){
            n=b*i;
            if(n%a==0){
                lcm=n;
                break;
            }
        }
    }
    printf("LCM:%d",lcm);
    return 0;
}
