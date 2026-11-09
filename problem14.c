#include <stdio.h>
int main(){
    int n,a[100],key,count=0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d numbers:\n",n);
    for(int i=0;i<n;i++){
        printf("%d)",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }

    printf("%d occurs %d time(s)\n",key,count);

    return 0;
}