#include <stdio.h>
int count(char s[]){
    int n=0;
for(int i=0; s[i]!='\n' && s[i]!='\0';i++)
n++;
return n;}
void reverse(char s1[],char r1[]){
    int n = count(s1);
    int i;
    for(i=0;i<n;i++)
    r1[i]=s1[n-i-1];
    r1[i]='\0';
}

int main(){
    char s[200],r[200];
    printf("enter the string: ");
    fgets(s,sizeof(s),stdin);
    reverse(s,r);
    printf("the revese of the string: %s\n",r);
    return 0;
}

