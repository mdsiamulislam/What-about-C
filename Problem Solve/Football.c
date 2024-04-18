#include<stdio.h>
int main(){
    char n[100];
    scanf("%s",n);
    int len = strlen(n);
    int sum = 0,count1=0,count0=0;

    for(int x=0; x<len; x++){
        if(n[x] == '1'){
            count1++;
        }else{
            count1 = 0;
        }
        if(count1 == 7){
                break;
            }
    }
    for(int x=0; x<len; x++){
        if(n[x] == '0'){
            count0++;
        }else{
            count0 = 0;
        }
        if(count0 == 7){
                break;
            }
    }

    if(count1 == 7 || count0 == 7){
                printf("YES");
            }else{
            printf("NO");
            }


}
