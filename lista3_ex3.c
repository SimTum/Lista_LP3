#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main() {
    float data[5][3];
    float dataTotals[] = {0, 0, 0, 0, 0};
    char names[5][64];

    float maxSaleMonth1 = INT_MIN;
    float minSaleMonth3 = INT_MAX;
    float total = 0;

    for (int i = 0; i < 5; i++) {
        printf("[%d] Informe o nome do vendedor: ", i);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] Digite as vendas do vendedor %s: ", i, j, names[i]);
            scanf("%f", &data[i][j]);
            getchar();
            total += data[i][j];
            dataTotals[i] += data[i][j];

            // Mês 1
            if (j == 0) maxSaleMonth1 = fmax(maxSaleMonth1, data[i][j]);

            // Mês 3
            if (j == 2) minSaleMonth3 = fmin(minSaleMonth3, data[i][j]);
        }
    }

    printf("Valor total vendido por vendedor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Vendedor %s: R$ %.2f\n", names[i], dataTotals[i]);
    }

    printf("Maior venda do mes 1: R$ %.2f\n", maxSaleMonth1);
    printf("Menor venda do mes 3: R$ %.2f\n", minSaleMonth3);
    printf("Total das vendas: R$ %.2f\n", total);

    return 0;
}
