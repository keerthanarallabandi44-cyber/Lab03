#include <stdio.h>
int main(){
    int a[3][3],i,j,sum_r1=0,sum_r2=0,sum_r3=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);

        }

        
    }
for(j=0;j<3;j++){
     sum_r1=sum_r1+a[0][j];
     sum_r2=sum_r2+a[1][j];
     sum_r3=sum_r3+a[2][j];

}

printf("sum of row 1: %d\n",sum_r1);
printf("sum of row 2: %d\n",sum_r2);
printf("sum of row 3: %d\n",sum_r3);
return 0;}