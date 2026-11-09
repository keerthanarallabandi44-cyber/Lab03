#include <stdio.h>
int is_palindrome(int n){
    int a=n;
    int reverse=0;
    while(a!=0){
        int remainder = a%10;
        
        reverse=reverse*10+remainder;
        a=a/10;
    }
if(reverse==n)
        return 1;
    else
return 0;}

    int main(){
        int num;
        printf("enter the number: ");
        scanf("%d",&num);
        if (is_palindrome(num))
        printf("%d is a palindrome",num);
        else
        printf("%d is not a palindrome",num);
        return 0;

    }
