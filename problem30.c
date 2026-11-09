#include <stdio.h>

void concatinate(char result[],char s1[],char s2[]){
    int i,j;
    for(i=0; s1[i]!='\n';i++)
    result[i]=s1[i];
    for(j=0;s2[j]!='\n';j++)
    result[i+j]=s2[j];

    result[i+j]='\0';

}

int main(){
    char s1[200],s2[200],result[400];
    printf("enter the first string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("enter second string: ");
    fgets(s2,sizeof(s2),stdin);
concatinate(result,s1,s2);

printf("concatinating the strings: %s",result);
return 0;

}