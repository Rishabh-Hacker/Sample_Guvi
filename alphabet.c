#include <stdio.h>
int main()
{
    char N;
    printf("Enter the Character");
    scanf("%c",&N);
    if(isalpha(N))
        printf("Alphabet");
    else if(isdigit(N))
        printf("No");
    else
        printf("Invalid Input");
}

