#include <stdio.h>
int main()
{
    int N,c=0,i;
    printf("Enter the Number");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(N%i==0)
            c+=1;
    }
    if(N==0)
    printf("No");
    else{
    if(c==2)
    printf("Yes");
    else
    printf("No");
    }}
