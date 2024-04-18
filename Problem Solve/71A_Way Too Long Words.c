#include <stdio.h>
#include <string.h>

int main() {
    int i, j;

    scanf("%d", &j);

    char str[j][101];

    for (i = 0; i < j; i++) {
        scanf("%s", str[i]);
    }

    for (i = 0; i < j; i++) {
        int length = strlen(str[i]);
        if(length > 10){
        char first = str[i][0];
        char end = str[i][length - 1];
        int abbreviation = length - 2;
        printf("%c%d%c\n", first, abbreviation, end);
        }else
        printf("%s\n",str[i]);
    }

    return 0;
}
