#include <stdio.h>

int main() {
    int m,x=0;
    scanf("%d", &m);

    int arr[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++) {

        if(arr[i] == 1){
            x++;
        }
    }
    if(x > 0){
           printf("HARD");
        }else{
            printf("EASY");
        }
    return 0;
}
