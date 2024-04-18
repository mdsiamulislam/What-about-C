#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int x=0;
for(int i=0; i<n; i++){
    int i, j;
    scanf("%d",&i);
    scanf("%d",&j);

    if((i+2)<j || (i+2)==j){
        x++;
    }
}
printf("%d",x);
}
