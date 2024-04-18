#include<stdio.h>
int count;
int sum = 0;
int main(){
    int n ,i ,j, k;
    scanf("%d",&n);

    for(int x=0; x<n; x++){
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);

    if((i==1 && j==1) || (i==1 && k==1)||(j==1 && k==1) ){
        count = 1;
    }else{
        count = 0;
    }

    sum = sum+count;
    }
printf("%d",sum);



}
