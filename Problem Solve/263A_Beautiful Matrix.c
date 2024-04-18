#include <stdio.h>
#include <stdlib.h> // Include the standard library for the abs() function

int main() {
    int matrix[5][5];
    int rowWithOne = -1;
    int colWithOne = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 1) {
                rowWithOne = i;
                colWithOne = j;
            }
        }
    }

        // Calculate the offsets to center the matrix
        int rowOffset = 2 - rowWithOne;
        int colOffset = 2 - colWithOne;

        // Calculate the absolute values of the offsets
        int rowMoves = abs(rowOffset);
        int colMoves = abs(colOffset);

        // Calculate the total number of moves needed
        int totalMoves = rowMoves + colMoves;

        // Print the number of moves
        printf("%d", totalMoves);

    return 0;
}
