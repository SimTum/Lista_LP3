#include <stdio.h>

int main()
{
    int mat[4][4], mat2[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\nMATRIX 1\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j % 2 != 0)
            {
                mat2[i][j] = mat[i][j - 1];
            }
            else
                mat2[i][j] = mat[i][j + 1];
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}