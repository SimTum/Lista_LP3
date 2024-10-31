#include <stdio.h>
#include <limits.h>

int main() {
    int matrix[3][5];

    int minValue = INT_MAX;
    int threeSum = 0;
    int totalSum = 0;
    int maxFromThirdColumn = INT_MIN;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite um numero [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] < minValue) minValue = matrix[i][j];
            if (matrix[i][j] % 3 == 0) threeSum += matrix[i][j];

            totalSum += matrix[i][j];

            if (j == 2 && matrix[i][j] > maxFromThirdColumn) maxFromThirdColumn = matrix[i][j];
        }
    }

    printf("Menor numero na matriz: %d\n", minValue);
    printf("Soma dos multiplos de tres: %d\n", threeSum);
    printf("Maior numero da terceira coluna: %d\n", maxFromThirdColumn);
    printf("Media dos numeros na matriz: %.2f\n", totalSum / 15.0);

    return 0;
}
