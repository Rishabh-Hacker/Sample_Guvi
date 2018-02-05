#include <stdio.h>
#include <string.h>
int main()
{
    char s[100000];
    int i,j;
    printf("Enter the string\n");
    scanf("%[^\n]c",s);
    printf("%s",strrev(s));
}
