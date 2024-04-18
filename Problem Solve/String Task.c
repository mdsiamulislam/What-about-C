#include <stdio.h>
#include <string.h>

int main() {
    char s[101];

    scanf("%s", s);
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        char x = tolower(s[i]);
        if((x == 'a') || (x == 'e') || (x == 'i') || (x  == 'o') || (x == 'u') || (x == 'y')){
            continue;
        }else{
        printf(".%c", x);
        }
    }

    return 0;
}
