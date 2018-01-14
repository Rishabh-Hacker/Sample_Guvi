#include <stdio.h>
int main()
{
    int N,i,s=0,K,a[2];
    printf("Enter the Array Size and Number");
    scanf("%d%d",&N,&K);
    a[N];
    printf("Enter the Numbers");
    for(i=1;i<=N;i++){
        scanf("%d",&a[i]);
            }
    for(i=1;i<=K;i++)
        s=s+a[i];
    printf("%d",s);
}
