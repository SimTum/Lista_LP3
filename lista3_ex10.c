#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int fakematrix[16];
    for (int i = 0; i < 16; i++)
    {
        if (i % 4 == 0)
            printf("\n");
        scanf("%d ", &fakematrix[i]);
        printf("%d ", fakematrix[i]);
    }
    int swapped_counter = 0;
    for (int j = 0; j < 16; j++)
    {
        for (int k = 0; k < 16 - j - 1; k++)
        {
            if (fakematrix[k] > fakematrix[k + 1])
            {
                int temp = fakematrix[k];
                fakematrix[k] = fakematrix[k + 1];
                fakematrix[k + 1] = temp;
                swapped_counter = 1;
            }
        }
        if (swapped_counter == 0)
            break;  
    }
    printf("\n\nSorted matrix:\n");
    for (int i = 0; i < 16; i++)
    {
        if (i % 4 == 0)
            printf("\n");
        printf("%d ", fakematrix[i]);
    }
}