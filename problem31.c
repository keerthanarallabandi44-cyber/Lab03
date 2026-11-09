#include <stdio.h>

int compare(char s1[], char s2[]){
    int i,count=0;
    for(i=0; s1[i]!='\n' && s2[i] !='\n';i++){
        if(s1[i]==s2[i])
        count++;}

        return count;
}

int main(){
    char s1[200],s2[200];
    printf("enter first string: ");
    fgets(s1,sizeof(s1),stdin);

    printf("enter second string: ");
    fgets(s2,sizeof(s2),stdin);

    printf("After comparing %d characters are same",compare(s1,s2));

    return 0;
}