#include <stdio.h>

int main() {
    int data[7][10];

    for (int i = 0; i < 10; i++) {
        data[6][i] = 0;
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 10; j++) {
            printf("[%d][%d] Digite um numero: ", i, j);
            scanf("%d", &data[i][j]);
            data[6][j] += data[i][j];
        }
    }

    printf("Somas das colunas:\n");
    for (int i = 0; i < 10; i++) {
        printf("[%d]: %d\n", i, data[6][i]);
    }

    return 0;
}
