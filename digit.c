#include <stdio.h>
int main()
{
    int N,c=0;
    printf("Enter the digit");
    scanf("%d",&N);
    while(N!=0){
    c=c+1;
    N=N/10;
    }
    printf("%d",c);
}
