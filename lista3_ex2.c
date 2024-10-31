#include <stdio.h>
#include <limits.h>

int main() {
    int matrix[4][6];

    int between10and30 = 0;
    int evenAbove10Sum = 0;
    int fourthColumnSum = 0;
    int thirdLineSum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite um numero [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] > 10) {
                if (matrix[i][j] < 30) between10and30 += 1;
                if (matrix[i][j] % 2 == 0) evenAbove10Sum += matrix[i][j];
            }

            if (j == 3) fourthColumnSum += matrix[i][j];
            if (i == 2) thirdLineSum += matrix[i][j];
        }
    }

    printf("Quantidade de numeros entre 10 e 30: %d\n", between10and30);
    printf("Soma dos numeros pares maiores que 10: %d\n", evenAbove10Sum);
    printf("Soma dos numeros na quarta coluna: %d\n", fourthColumnSum);
    printf("Soma dos numeros na terceira linha: %d\n", thirdLineSum);

    return 0;
}
