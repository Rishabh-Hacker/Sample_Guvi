#include<stdio.h>
int main(){
    int N,i,f=1;
    printf("Enter the Number");
    scanf("%d",&N);
    for(i=1;i<=5;i++){
    f=i*N;
    printf("%d ",f);
    }
}
