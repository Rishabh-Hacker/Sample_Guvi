#include <stdio.h>
int main()
{
    int N,N2,N3;
    printf("Enter the Three Numbers");
    scanf("%d%d%d",&N,&N2,&N3);
    if(N>N2 && N>N3)
        printf("%d",N);
    else if(N2>N3 && N2>N)
        printf("%d",N2);
    else
        printf("%d",N3);
}
