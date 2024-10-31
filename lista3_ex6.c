#include <stdio.h>

int main() {
    int data[10][3]; // ID -> {Salario, Idade, N. Filhos}

    // Legibilidade
    const int SALARY = 0;
    const int AGE = 1;
    const int CHILDREN = 2;

    float averageSalary = 0;
    float averageChildren = 0;
    int childrenBetween15and25 = 0;
    int peopleBetween20and30 = 0;
    float averageSalaryBetween20and30 = 0;

    for (int i = 0; i < 10; i++) {
        printf("[%d] Informe o salario (inteiro): ", i);
        scanf("%d", &data[i][SALARY]);
        printf("[%d] Informe a idade: ", i);
        scanf("%d", &data[i][AGE]);
        printf("[%d] Informe o numero de filhos: ", i);
        scanf("%d", &data[i][CHILDREN]);

        averageSalary += data[i][SALARY];
        averageChildren += data[i][CHILDREN];

        if (15 < data[i][AGE] && data[i][AGE] < 25) {
            childrenBetween15and25 += data[i][2];
        }

        if (20 < data[i][AGE] && data[i][AGE] < 30) {
            averageSalaryBetween20and30 += data[i][SALARY];
            peopleBetween20and30 += 1;
        }
    }

    averageSalary /= 10.0;
    averageChildren /= 10.0;

    if (peopleBetween20and30 > 1) {
        averageSalaryBetween20and30 /= peopleBetween20and30;
    }

    printf("Salario medio: R$ %.2f\n", averageSalary);
    printf("Media de filhos: %.2f\n", averageChildren);
    printf("Quantidade de filhos das pessoas entre 15 e 25 anos: %d\n", childrenBetween15and25);
    printf("Salario medio das pessoas entre 20 e 30 anos: R$ %.2f\n", averageSalaryBetween20and30);

    return 0;
}
