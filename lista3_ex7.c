#include <stdio.h>
#include <string.h>

int main() {
    int data[5][4];
    int bestAverageIndex;
    char names[5][129];
    float averages[5] = {0};
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
        
        for (int j = 0; j < 4; j++) {
            printf("[%d][%d] Insira uma nota: ", i, j);
            scanf("%d", &data[i][j]);
            getchar();
            averages[i] += data[i][j];
        }

        averages[i] /= 4;

        if (i == 0) bestAverageIndex = 0;
        if (averages[i] > averages[bestAverageIndex]) bestAverageIndex = i;

    }

    printf("Melhor media: %.2f (Obtido por %s)\n", averages[bestAverageIndex], names[bestAverageIndex]);
    printf("Notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota: %.2f | Aluno: %s\n", averages[i], names[i]);
    }

    return 0;
}
