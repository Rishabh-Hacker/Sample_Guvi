#include <stdio.h>
int main()
{
    char N;
    printf("Enter the Character");
    scanf("%c",&N);
    if(isalpha(N)){
    if(N=='a'||N=='e'||N=='i'||N=='o'||N=='u'||N=='A'||N=='E'||N=='I'||N=='O'||N=='U')
        printf("Vowel");
    else
        printf("Consonant");
    }
    else
        printf("Invalid Input");
}
