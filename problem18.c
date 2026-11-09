#include <stdio.h>
exchange(int *a,int *b){
int x;
x=*a;
*a=*b;
*b=x;
return 0 ;
}
int main(){
    int num1,num2;
    printf("enter num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    exchange(&num1,&num2);
    printf("after exchanging num1=%d,num2=%d",num1,num2);
    return 0;
}

