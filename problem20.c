#include <stdio.h>
int isprime(int n){
    int i,is_prime=1;
    if(n<2)
    return 0;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
        is_prime=0;
    }
    return is_prime;
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
int result = isprime(n);

if (result ==1)
printf("1");

else
printf("0");
return 0;

}




