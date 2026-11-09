#include <stdio.h>
int length(char line[200]){
    int count =0;
    for(int i=0;line[i]!='\n'&& line[i]!='\0';i++){
        count=count+1;}
        return count;
    
}
    int main(){
        char line[200];
        printf("Enter Line: ");
        fgets(line,sizeof(line),stdin);
        printf("Length= %d",length(line));
        return 0;
    }
