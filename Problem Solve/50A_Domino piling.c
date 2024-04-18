#include<stdio.h>

int main(){

    int M ,N,A;
    int a = 2, b=1,c=a*b,ans;

    scanf("%d%d",&M,&N);
    A = M*N;
    ans = A/c;
    printf("%d",ans);

    return 0;


}
