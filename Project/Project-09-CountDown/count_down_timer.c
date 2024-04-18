#include <stdio.h>
int main(){
    int hour,minute,second;
    printf("Enter the time in hour,minute and second format: ");
    scanf("%d %d %d",&hour,&minute,&second);
    while(hour>=0){
        while(minute>=0){
            while(second>=0){
                printf("%d:%d:%d\n",hour,minute,second);
                second--;
                sleep(1);
            }
            second=59;
            minute--;
        }
        minute=59;
        hour--;
    }
    printf("Time is over\n");
    return 0;

}