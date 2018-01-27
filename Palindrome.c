#include <stdio.h>
int main()
{
    int N,h,s=0,x=0;
    printf("Enter the Number");
    scanf("%d",&N);
    h=N;
    while(N!=0){
        x=N%10;
        s=(s*10)+x;
        N=N/10;
        }
    if(h==s)
    printf("Yes");
    else
    printf("No");
    }
