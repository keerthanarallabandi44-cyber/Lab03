#include <stdio.h>
#include <ctype.h>

void is_vowel(char ch){
    char lower = tolower(ch);
    if(lower=='a' || lower=='e'|| lower== 'i' || lower=='o' || lower== 'u')
    printf("%c is a vowel",ch);
    else
    printf("%c is not a vowel",ch);
}

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    is_vowel(ch);
    return 0;
}