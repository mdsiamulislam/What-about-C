#include <stdio.h>
#include <ctype.h>
#include <string.h> // Include the string.h header for string functions.

int main() {
    int numStrings;

    scanf("%d", &numStrings);
    while (getchar() != '\n');

    char words[numStrings][100];

    for (int i = 0; i < numStrings; i++) {
        scanf("%99s", words[i]);

        for (int j = 0; words[i][j] != '\0'; j++) {
            words[i][j] = tolower(words[i][j]);
        }
    }

    for (int i = 0; i < numStrings; i++) {
        if (strcmp(words[i], "yes") == 0) {
            strcpy(words[i], "YES");
        } else {
            strcpy(words[i], "NO");
        }
        printf("%s\n", words[i]);
    }

    return 0;
}
