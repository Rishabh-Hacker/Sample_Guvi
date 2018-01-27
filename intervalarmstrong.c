#include<stdio.h>
#include<math.h>
int main(){
    int N,Q,i,j;
    printf("Enter the Two Numbers");
    scanf("%d%d",&N,&Q);
    if(N<Q){
        i=N+1;
        j=Q;
    }
    else{
        i=Q+1;
        j=N;
    }
    for(;i<j;i++){
        armstrong(i);
    }
}
int armstrong(int N){
int c,i,h,x=0,s=0,j=0;
h=N;
c=N;
while(c!=0){
    c=c/10;
    j+=1;
    }
while(N!=0){
    x=N%10;
    s=s+pow(x,j);
    N=N/10;
    }
if(h==s)
printf("%d ",s);
}
