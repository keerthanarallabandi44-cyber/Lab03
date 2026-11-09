    #include <stdio.h>
   

    int length(char line[]){
        int count =0;
        for(int i=0;line[i]!='\n'&&line[i]!='\0';i++)
        count=count+1;
        return count;
    }

    int main(){
        char line[200];
        printf("Enter the line: ");
        fgets(line,sizeof(line),stdin);
        length(line);
        printf("length of the srting is %d.\n",length(line));
        return 0;
    }