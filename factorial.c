#include<stdio.h>
int main(){
    int N,Q,i,f=1;
    printf("Enter the Number");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    f=f*i;
    }
    printf("%d",f);
}
