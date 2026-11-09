#include <stdio.h>
int main(){
    int i,n,a[100];
    printf("enter the number of digits ");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
   for(i=0;i<n;i++){
    printf("%d)",i+1);
    scanf("%d",&a[i]);
   }
   printf("after reversing:\n");
   int b[100];
   for(i=0;i<n;i++){
    b[n-1-i]=a[i];
   
   }

   for(i=0;i<n;i++)
    printf("%d, ",b[i]);
   return 0;

}