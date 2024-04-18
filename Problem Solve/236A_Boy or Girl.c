#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", &str);
    int k;

    int len = strlen(str);

    for (int i = 0; i < len; i++){

        for (int j = i + 1; j < len; j++){

            if (str[j] == str[i]){

                for (k = j; k < len; k++){

                    str[k] = str[k + 1];
                }
                len--;
                j--;
            }
        }
    }

    int valu = strlen(str);

    if (valu % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}
