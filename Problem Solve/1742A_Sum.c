#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);

    // Array to store the results for each input
    char results[n][4]; // Assuming "YES" or "NO" as output

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);

        int suma = a + b;
        int sumb = b + c;
        int sumc = a + c;

        if (suma == c || sumb == a || sumc == b) {
            // Store "YES" in the result array
            sprintf(results[i], "YES");
        } else {
            // Store "NO" in the result array
            sprintf(results[i], "NO");
        }
    }

    // Print the results after processing all inputs
    for (int i = 0; i < n; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}
