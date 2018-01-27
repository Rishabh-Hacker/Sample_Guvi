#include<stdio.h>
#include<math.h>
int main(){
int N,c,i,h,x=0,s=0,j=0;
printf("Enter the Number to check armstrong");
scanf("%d",&N);
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
printf("Yes");
else
printf("No");
}
