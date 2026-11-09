#include <stdio.h>
int is_even(int n){
    return n% 2==0;
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    if (is_even(num))
    printf("%d is an even number",num);
    else
    printf("%d is an odd number",num);

    return 0;
}