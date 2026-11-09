#include <stdio.h>
void fab_series(int n){
    if (n<=2 && n>0){
    switch (n) {
        case(1):
        printf("0");
        break;
        case (2):
        printf("0, 1");
        break;

    }}

    if (n>2){
        int last=0;
        int previous=1;
        int count=1,next;
        printf("0, 1, ");
        while(count<=n){
           next=last + previous;
           last=previous;
           previous=next;
            printf("%d ",next);
            count++;

        }
    }
return;}



    int main(){
        int num;
        printf("enter N: ");
        scanf("%d",&num);
        fab_series(num);
        return 0;
    }