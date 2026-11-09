#include <stdio.h>
int main(){
    int n,a[100];
    printf("enter the number of digits ");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
   for(int i=0;i<n;i++){
    printf("%d)",i+1);
    scanf("%d",&a[i]);
   }

   for ( int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            int temp =a[j+1];
            a[j+1]=a[j];
            a[j]=temp;}}
            
    
   }
   
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);}
    
    return 0;}