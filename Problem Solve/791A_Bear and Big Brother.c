#include<stdio.h>

int main(){
    int a,b,pa = 1,pb = 1,ia,ib,x;

    scanf("%d%d",&a,&b);

    for(int i=0; ia<=ib; i++){
        x = i+1;

        pa = pow( 3, x);
        pb = pow( 2, x);

        ia = pa*a;
        ib = pb*b;


    }
        printf("%d   ",x);




}
