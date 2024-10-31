#include <stdio.h>
#include <stdlib.h>
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(int argc, char *argv[])
{
    int fakematrix[16];
    for (int i = 0; i < 16; i++)
    {
        scanf("%d ", &fakematrix[i]);
        printf("%d ", fakematrix[i]);
    }
    qsort(fakematrix, sizeof(fakematrix) / sizeof(*fakematrix), sizeof(*fakematrix), comp);
    for (int i = 0; i < 16; i++)
    {
        printf("%d ", fakematrix[i]);
    }
}