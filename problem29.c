#include <stdio.h>
 void copy(char original[],char dup[]){
    int i;
    for( i=0;original[i]!='\0';i++)
        dup[i]=original[i];

        dup[i]='\0';
    
 }

 int main(){
    char original[200],dup[200];
    printf("Enter the line: ");
    fgets(original,sizeof(original),stdin);
    copy(original,dup);

    printf("The copy is:\n%s",dup);
    return 0;
 }