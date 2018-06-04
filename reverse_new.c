#include<stdio.h>
int main(){
    int n,x,i,s=0;
    scanf("%d",&n);
    while(n!=0){
    x=n%10;
    s=s*10+x;
    n=n/10;
    }
    printf("Reversed No is:%d",s);
}

