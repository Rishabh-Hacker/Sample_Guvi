#include <stdio.h>
int main()
{
    int N,i,s=0;
    printf("Enter the Number to sum the natural Numbers N times");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        s=s+i;
    printf("%d",s);
}
