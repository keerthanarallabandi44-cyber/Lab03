    #include <stdio.h>
    long long fact(int n,int r){
        long long i,up=1,down=1,down1=1;
        if(r>n || r<0)
        return 0;
        for(i=0;i<n;i++){
            up=up*(i+1);
        }
        for(i=0;i<r;i++){
            down=down*(i+1);
        }
        for(i=0;i<(n-r);i++){
            down1=down1*(i+1);
        }

        return up/(down*down1);
    }

    int main(){
    int r,n;
    printf("enter the value of n in (nCr): ");
    scanf("%d",&n);
    printf("enter the value of r in (nCr): ");
    scanf("%d",&r);
    printf("%lld",fact(n,r));
    return 0;

    }