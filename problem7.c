#include <stdio.h>
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);}
}
int max=a[0][0];
int min=a[0][0];

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    if(a[i][j]>max)
    max=a[i][j];
    if(a[i][j]<min)
    min=a[i][j];}
}

printf("\nThe Matrix:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    printf("%d ",a[i][j]);
    printf("\n");

}
printf("The Max is: %d\n",max);
printf("The Min is: %d",min);
return 0;


}