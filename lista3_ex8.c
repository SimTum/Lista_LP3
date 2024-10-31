#include <stdio.h>

int main()
{
    int matrix[2][6], max, sum_m3 = 0, matrix2[2][6];
    float av_2_line = 0, av_all = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == 0 && j == 0)
                max = matrix[i][j];
            if (matrix[i][j] > max)
                max = matrix[i][j];
            if (matrix[i][j] % 3 == 0)
                sum_m3 += matrix[i][j];
            av_all += matrix[i][j];
            if (i == 1)
                av_2_line += matrix[i][j];
        }
    }
    av_all = av_all / 12;
    av_2_line = av_2_line / 6;
    printf("O numero maximo:%d\nA soma dos numeros multiplos de 3: %d\nA media de elementos da segunda linha de matriz: %.2f\nA media de todos os elemntos de matriz: %.2f \n", max, sum_m3, av_2_line, av_all);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrix2[i][j] = av_all * matrix[i][j];
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
return 0;
}
