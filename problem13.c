#include <stdio.h>
int main(){
     int n, a[100];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d numbers:\n",n);
    for (int i = 0;i<n;i++) {
        printf("%d)",i+1);
        scanf("%d", &a[i]);
        }
printf("the number you want to find: ");
int b;
scanf("%d",&b);
int found=0;
        for(int i=0;i<n;i++){
            if(b==a[i]){
            printf("the number is found at a[%d]",i);
            found=1;
            break;}

        }

if (found==0)
printf("not found");
        return 0;
    }
    
    
