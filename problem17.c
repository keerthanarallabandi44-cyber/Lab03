#include <stdio.h>
#include <math.h>


int is_amstrong(int n){
    int a=n,count=0;
    while(a!=0){
        a=a/10;
count++;

    }

int ams=0,remainder;
a=n;
while(a!=0){
    remainder=a%10;
    ams=ams+(int)round(pow(remainder,count));
 a=a/10;}
    if (n==ams)
    return 1;
    return 0;
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    if(is_amstrong(num))
    printf("%d is an amstrong",num);
    else
    printf("%d is not an amstong",num);
    return 0;
}


