#include <stdio.h>
int main()
{
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
        prime(i);
    }
}
int prime(int N){
    int i,c=0;
    for(i=1;i<=N;i++){
        if(N%i==0)
            c+=1;
    }
    if(c==2)
    printf("%d",N);
     }
