#include <stdio.h>
int main()
{
    int N,Q,i,j;
    printf("Enter the first Number and Second Number ");
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
        if(i%2==0)
            continue;
        else
        printf("%d",i);
    }
}
