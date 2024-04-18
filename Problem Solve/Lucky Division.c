#include <stdio.h>
#include <string.h>

int main() {
    char n[1000];
    scanf("%s", n);
    int len = strlen(n);
    int count = 0;
     int num = atoi(n);
    if(num%4==0 || num%7 == 0 || num%47==0 || num%74 == 0 || num%744==0 || num%477==0){
        count = 3;
    }

    if (count == 3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
