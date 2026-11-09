#include <stdio.h>
int main(){
    int i,j,a[10],b[10],c[10];
    printf("enter 10 numbers: \n");
    for(i=0;i<10;i++){
    printf("%d)",i+1);
    scanf("%d",&a[i]);}

    for(j=0;j<10;j++){
    printf("%d)",j+1);
    scanf("%d",&b[j]);}

    for(i=0;i<10;i++){
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }

    printf("first array after swapping: ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    printf("\nsecond array after swapping: ");
    for(i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    printf("\n");

    return 0;
}